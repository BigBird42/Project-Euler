grid_size = 20
grid = [[0 for i in range(grid_size+1)] for j in range(grid_size+1)]

for i in range (0,grid_size,1):
    grid[grid_size][i] = 1
    grid[i][grid_size] = 1

for row in range(grid_size-1, -1, -1):
    for col in range(grid_size-1, -1, -1):
        grid[row][col] = grid[row+1][col] + grid[row][col+1]

print(grid[0][0])