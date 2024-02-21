#!/usr/bin/python3

"""
island_perimeter

Calculates the perimeter of islands described in rectangular grids.

This module provides a function `island_perimeter` that takes a list
of lists of integers representing a grid as input. Each cell in
the grid is either 0 (water) or 1 (land). The function returns the perimeter
of the largest island in the grid, considering only horizontal and vertical
connections and assuming the grid is completely surrounded by water.

Limitations:
- Grid cells are connected horizontally and vertically, not diagonally.
- Grid is rectangular, and its width and height do not exceed 100.
- Grid is completely surrounded by water, and there is one island (or none).
- The island does not have internal "lakes" (water not connected to
the surrounding water).
"""


def island_perimeter(grid):
    """Calculates the perimeter of the island described in the grid.

    Args:
        grid: A list of lists of integers, where 0 represents
        a water zone and 1 represents a land zone.

    Returns:
        The perimeter of the island as an integer.
    """

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                # Check neighboring cells
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
