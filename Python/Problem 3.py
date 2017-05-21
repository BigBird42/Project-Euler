factor = 600851475143

i = 2
while(i * i <= factor):
    if factor % i:
        i += 1
    else:
        factor //= i
print(factor)
