total = 0
for i in range(1,25,1):
    for j in range(1,10,1):
        num = j**i
        if len(str(num)) == i:
            total += 1
            print(f"{j} ^ {i} = {num}")
print(total)