import os

os.chdir('Python')

names = ""
with open('Problem 22 Data.txt', 'r') as f:
    names = f.read()

names = names.split(',')

names.sort()

total = 0
for i in range(0,len(names),1):
    temp = 0
    names[i] = names[i][1:-1]
    for char in names[i]:
        temp += ord(char) - ord('A') + 1
    temp *= i+1 
    total += temp
print(total)
