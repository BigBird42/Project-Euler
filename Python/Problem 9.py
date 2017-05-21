def find_triplet():
    for b in range(0,1000,1):
        for a in range(0,b,1):
            if not (1000*(500-a-b) + a*b):
                return (a,b,1000-a-b)

abc = find_triplet()
print(abc[0] * abc[1] * abc[2])
