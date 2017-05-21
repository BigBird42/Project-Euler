import os

triangle = ""

os.chdir('Python')
with open('Problem 67 Data.txt', 'r') as f:
    triangle = f.read()
triangle = triangle.split('\n')

for i in range(0, len(triangle), 1):
    triangle[i] = triangle[i].split(' ')
    triangle[i] = list(map(int, triangle[i]))

for row in range(len(triangle)-1, -1, -1):
    for col in range(0, row, 1):
        if(triangle[row][col] > triangle[row][col+1]):
            triangle[row-1][col] += triangle[row][col]
        else:
            triangle[row-1][col] += triangle[row][col+1]
print(triangle[0][0])