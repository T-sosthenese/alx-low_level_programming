#!/usr/bin/python3


def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the grid.
    Args:
        grid (list[list[int]]): A list of list of integers
    Returns: island perimeter
    """
    height = len(grid)
    width = len(grid[0])
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - i][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
