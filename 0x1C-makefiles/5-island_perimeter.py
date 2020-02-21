#!/usr/bin/python3
"""Island Perimeter Module"""


def island_perimeter(grid):
    """
    Island Perimeter returns the perimeter of the island
    Parameters:
    @grid: List of list of integers
    Where into grid:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water,
    and there is one island (or nothing).
    The island doesn’t have “lakes”
    (water inside that isn’t connected to the water around the island).
    """
    perimeter = 0
    """For loop to know how many landzone are in each row and col"""
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if (grid[row][col] == 1):
                if (row == 0 or grid[row - 1][col] == 0):
                    perimeter += 1
                if (row == (len(grid) - 1) or grid[row + 1][col] == 0):
                    perimeter += 1
                if (col == 0 or grid[row][col - 1] == 0):
                    perimeter += 1
                if (col == (len(grid[row]) - 1) or grid[row][col + 1] == 0):
                    perimeter += 1
    return (perimeter)
