max_a = 100
min_a = 2
max_b = 100
min_b = 2

terms = set()

for a in range(min_a, max_a+1, 1):
    for b in range(min_b, max_b+1, 1):
        terms.add(int(a**b))
print(len(terms))