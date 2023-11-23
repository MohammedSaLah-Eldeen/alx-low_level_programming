#!usr/bin/python3
"""
Task 5 solution.
"""


def island_perimeter(grid):
    """defines the solution for the task."""
    water_zone = 0
    land_zone = 1

    # adding a water frame to the grid.
    # inserting the top and bottom.
    grid.insert(0, [water_zone for n in range(len(grid))])
    grid.append([water_zone for n in range(len(grid))])
    # inserting left and right.
    for r in grid:
        r.append(water_zone)
        r.insert(0, water_zone)

    # calculating perimeter.
    perimeter = 0
    for r_idx in range(1, len(grid) - 1):
        for idx in range(1, len(grid) - 1):
            piece = grid[r_idx][idx]
            if piece == water_zone:
                continue
            else:
                up_piece = grid[r_idx - 1][idx]
                next_piece = grid[r_idx][idx + 1]
                prev_piece = grid[r_idx][idx - 1]
                bottom_piece = grid[r_idx + 1][idx]
                if up_piece == water_zone:
                    perimeter += 1
                if bottom_piece == water_zone:
                    perimeter += 1
                if next_piece == water_zone:
                    perimeter += 1
                if prev_piece == water_zone:
                    perimeter += 1
    return perimeter
