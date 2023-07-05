from time import sleep as eepy

with open('beemovie.txt', 'r') as file:
    lines = file.readlines()
    for line in lines:
        print(line)
        eepy(1)
