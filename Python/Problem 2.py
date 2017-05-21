fib = [1,2]

while(fib[-1] < 4000000):
    fib.append(fib[-1] + fib[-2])

total = 0

for i in range(0,len(fib) - 1, 1):
    if not (fib[i] % 2):
        total += fib[i]

print(total)