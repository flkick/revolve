from sys import platform
import matplotlib
import numpy as np
import os
from glob import glob
if platform == "darwin":
    matplotlib.use("TkAgg")
import matplotlib.pyplot as plt


# Parameters
path = "/home/maarten/projects/revolve-simulator/revolve/output/cpg_bo/main_1556883301/"
fitness_file = "fitnesses.txt"
yaml_temp_path = "/home/maarten/projects/revolve-simulator/revolve/experiments/bo_learner/yaml/yaml_temp/"

# Get all sub-directories
path_list = glob(path + "*")
path_list = [path_ for path_ in path_list if os.path.isdir(path_)]
n_dirs = len(path_list)

# Holder
results = np.empty((n_dirs, 3))

# Check if it's numeric:
fitness_list = []
for i, path_ in enumerate(path_list):
    try:
        int(path_.split("/")[-1] )
    except:
        continue

    # Do fitness analysis
    subfolder_list = glob(path_ + "/*/")
    subfolder_list = [d for d in subfolder_list if os.path.isfile(d + fitness_file)]
    n_subruns = len(subfolder_list)
    n_rows = len([(line.rstrip('\n')) for line in open(subfolder_list[0] + "/" + fitness_file)])

    # Working variables
    fitnesses = np.empty((n_rows,n_subruns))
    fitnesses_mon = np.empty((n_rows,n_subruns))

    # Create plot
    plt.figure()
    plt.title("Monotonic - Param setting " + str(i))
    plt.xlabel("Iteration")
    plt.ylabel("Fitness")
    plt.grid()

    # For all n_runs
    for j, subfolder in enumerate(subfolder_list):
        # Get fitness file
        my_fitness = [(line.rstrip('\n')) for line in open(subfolder + "/" + fitness_file)]

        # Transfer fitness to monotonic sequence and save
        my_fitness_mon = [e if e >= max(my_fitness[:ix+1]) else max(my_fitness[:ix+1]) for ix, e in enumerate(my_fitness)]

        # Save fitness
        fitnesses_mon[:,j] = np.array(my_fitness_mon)
        fitnesses[:,j] = np.array(my_fitness)

        # Plot the avg fitness
        plt.plot(fitnesses_mon[:, j], linewidth = 1, color = "blue")

    # Take average value over the n_runs
    avg_fitness = np.mean(fitnesses, axis=1)
    avg_fitness_mon = np.mean(fitnesses_mon, axis=1)

    # Save plot
    plt.plot(avg_fitness_mon, linestyle="dashed", linewidth=2.5, color="black")
    plt.tight_layout()
    plt.savefig(path_ + "/" + str(round(avg_fitness_mon[-1], 7)) + "d.png")

    # Save fitness
    fitness_list += [[round(avg_fitness_mon[-1], 5), i]]

    # Get fitness stats
    fitness_list.sort(key=lambda x: x[0])
    fitness_list.reverse()
    fitness_list

print("Fitnesses are:")
for e in fitness_list:
    print(e)
    e = [str(e_) for e_ in e]
    # Write to file in main directory
    with open(path + '/results.txt', 'a') as avg_fitness_file:
        avg_fitness_file.write(",".join(e) + "\n")

print("Contents written to ", path)

# Delete the yaml's
yaml_files = glob(yaml_temp_path + "*")
for f in yaml_files:
    os.remove(f)