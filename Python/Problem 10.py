primes_max = 2000000
primes = [True] * primes_max
primes[0] = False
primes[1] = False
total = 0

for i in range(1, primes_max, 1):
    if primes[i]:
        for j in range(i*2, len(primes), i):
            primes[j] = False
        total += i
        
print(total)