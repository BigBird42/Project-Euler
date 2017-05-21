import math

total = 0
num = int(math.pow(2,1000))
num = str(num)

for i in range(0,len(num),1):
    total += int(num[i])
print(total)