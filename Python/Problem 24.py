import itertools

text = "0123456789"

perms = list(itertools.permutations(text))

print(perms[999999])