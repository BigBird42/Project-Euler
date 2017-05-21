sum_of_sq = 0
sq_of_sum = 0

for i in range(1,101,1):
    sq_of_sum += i
    sum_of_sq += i*i

print((sq_of_sum**2) - sum_of_sq)