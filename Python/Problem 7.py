primes_max = 1000000
num_primes = 0
primes = [True] * primes_max
primes[0] = False
primes[1] = False


for i in range(1, primes_max, 1):
    if primes[i]:
        for j in range(i*2, len(primes), i):
            primes[j] = False
        num_primes += 1
    if(num_primes == 10001):
        print(i)
        break
