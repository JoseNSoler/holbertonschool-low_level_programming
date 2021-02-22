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

    perimeter = 0
    x = len(grid)
    y = len(grid[0])
    for row in range(x):
        for column in range(y):
            if grid[row][column] == 1:
                if grid[row][column - 1] == 0 or column == 0:
                    perimeter += 1
                if y - 1 == column or grid[row][column + 1] == 0:
                    perimeter += 1
                if grid[row - 1][column] == 0 or row == 0:
                    perimeter += 1
                if x - 1 == row or grid[row + 1][column] == 0:
                    perimeter += 1
    return perimeter
