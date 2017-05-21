fact = 1
for i in range(1,101,1):
    fact *= i

total = 0
while fact:
    total += fact % 10
    fact //= 10

print(total)