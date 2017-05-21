import math

def find_factors(num):
    factors = 0
    for i in range(1,int(math.sqrt(num)),1):
        if not num % i:
            factors += 2
    if( int(math.sqrt(num)) ** 2 == num):
        factors -= 1
    return factors

num = 0
it = 0
divisors = []
while(find_factors(num) < 500):
    it += 1
    num += it

print(num)