#!/usr/bin/python3
"""
This "5-island_perimeter.py" module exports one function:
 island_perimeter - calculates the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """Function to calculate the perimeter of an island in a grid.

    Args:
        grid: List of list of integers of 1's(land) and 0's(water)

    Returns:
        The perimeter of the island that has no inland water bodies
    """
    per = 0
    for row in grid:
        cur = 0
        for it in row:
            if it != cur:
                per += 1
                cur = it
        if cur == 1:
            per += 1
    for colno in range(len(grid[0])):
        cur = 0
        for rowno in range(len(grid)):
            if grid[rowno][colno] != cur:
                per += 1
                cur = grid[rowno][colno]
        if cur == 1:
            per += 1
    return per


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
