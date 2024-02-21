!/usr/bin/python3
"""Defines an island perimeter measuring function."""
def island_perimeter(grid):
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4  # Every land cell contributes 4 to the perimeter

                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 for shared edge with left neighbor

                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 for shared edge with top neighbor

    return perimeter
