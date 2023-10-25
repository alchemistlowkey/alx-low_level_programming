#!/usr/bin/python3
"""
The Island perimeter function
"""


def island_perimeter(grid):
    """
    A function that returns the perimeter of an Island described in grid

    Arguments:
        grid - A list of list of integers

    Returns:
        The Perimeter of the grid
    """

    perimeter = 0
    row = len(grid)

    for hor in range(row):
        for ver in range(len(grid[hor])):
            if grid[hor][ver] == 1:
                perimeter += 4
                if hor > 0 and grid[hor - 1][ver] == 1:
                    perimeter -= 2
                if ver > 0 and grid[hor][ver - 1] == 1:
                    perimeter -= 2
    return perimeter
