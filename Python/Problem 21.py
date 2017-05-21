import math

def find_factors_sum(num):
    factors = 0
    
    i = 2
    while i <= math.sqrt(num):
        if not num % i:
            factors += i
            if i != (num / i):
                factors += num / i
        i += 1
    factors += 1 #num is divisible by 1
    return int(factors)

sum_of_div = []
sum_of_div.append(0)
for i in range(1,10001,1):
    sum_of_div.append(find_factors_sum(i))
total = 0
for i in range(0, len(sum_of_div), 1):
    if sum_of_div[i] < len(sum_of_div) and sum_of_div[sum_of_div[i]] == i and i != sum_of_div[i]:
        total += i
print(total)
