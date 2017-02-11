total = 0
for i in range (1,1000,1):
	total += (i**i) % 10000000000

print(total % 10000000000)
