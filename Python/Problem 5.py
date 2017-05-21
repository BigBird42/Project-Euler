num = 20
found = False
while not found:
    num += 20
    found = True
    for i in range(11,21,1):
        if num % i:
            found = False
            break

print(num)