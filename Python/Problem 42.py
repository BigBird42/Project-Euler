import os

def calc_tri(n):
    return int((n+1) * (n/2))

words = ""
tri_nums = []
tri_words = 0

for i in range(1,200,1):
    tri_nums.append(calc_tri(i))

os.chdir('Python')
with open('Problem 42 Data.txt', 'r') as f:
    words = f.read()
words = words.split(',')

for word in words:
    word = word[1:-1]
    word_val = 0
    for letter in word:
        word_val += ord(letter) - 64
    if word_val in tri_nums:
        tri_words += 1

print(tri_words)