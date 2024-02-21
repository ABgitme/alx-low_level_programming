#!/usr/bin/python3

def island_perimeter(grid):
    """Calculates the perimeter of the island described in the grid.

    Args:
        grid: A list of lists of integers, where 0 represents a water zone and 1 represents a land zone.

    Returns:
        The perimeter of the island as an integer.
    """

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Check all four neighbors
                neighbors = [(row - 1, col), (row + 1, col), (row, col - 1), (row, col + 1)]
                for neighbor_row, neighbor_col in neighbors:
                    # If neighbor is out of bounds or water, add 1 to perimeter
                    if neighbor_row < 0 or neighbor_row >= rows or neighbor_col < 0 or neighbor_col >= cols or grid[neighbor_row][neighbor_col] == 0:
                        perimeter += 1
    return perimeter
