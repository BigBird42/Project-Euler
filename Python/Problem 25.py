import math

num_digites = 1000

fib = [1,1]

while math.log10(fib[-1]) < num_digites-1:
    fib.append(fib[-1] + fib[-2])
print(len(fib))