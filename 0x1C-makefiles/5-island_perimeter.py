#!/usr/bin/python3
''' Module - Defines an island perimeter measuring function. '''


def island_perimeter(grid):
    """
    Function Island_perimeter

    Args:
        grid (list): the date in the list is intergert
    Returns:
        count [int]: perimeter
    """

    count = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if grid[x-1][y] == 0:
                    count += 1
                if grid[x+1][y] == 0 or x == len(grid) - 1:
                    count += 1
                if grid[x][y+1] == 0 or y == len(grid[x]) - 1:
                    count += 1
                if grid[x][y-1] == 0:
                    count += 1
    return count
