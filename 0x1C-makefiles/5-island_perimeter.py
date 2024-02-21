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

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Check all four neighbors
                neighbors = [
                    (row - 1, col),
                    (row + 1, col),
                    (row, col - 1),
                    (row, col + 1)
                ]
                for neighbor_row, neighbor_col in neighbors:
                    # If neighbor is out of bounds or water, add 1 to perimeter
                    if any([
                        neighbor_row < 0,
                        neighbor_row >= rows,
                        neighbor_col < 0,
                        neighbor_col >= cols,
                        grid[neighbor_row][neighbor_col] == 0
                    ]):
                        perimeter += 1
    return perimeter
