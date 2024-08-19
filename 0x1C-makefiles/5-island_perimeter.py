#!/usr/bin/python3
"""
A function def island_perimeter(grid): that returns the perimeter
of the island described in grid
"""


def island_perimeter(grid):

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            peri = 0
            if (grid[i][j] == 1):
                if (grid[i-1][j] == 0):
                    peri += 1
                if (grid[i][j-1] == 0):
                    peri += 1
                if (grid[i+1][j] == 0):
                    peri += 1
                if (grid[i][j+1] == 0):
                    peri += 1
                perimeter += peri

    return (perimeter)
