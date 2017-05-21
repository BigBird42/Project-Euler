spiral_size = 1001

total = 1
add = [8,6,4,2]
diag = [1,1,1,1]

for i in range(0,int(spiral_size/2),1):
    for j in range(0,4,1):
        diag[j] += add[j]
        add[j] += 8
        total += diag[j]
print(add)
print(total)
