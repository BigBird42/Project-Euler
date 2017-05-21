def next_collatz(n):
    if n % 2:
        return 3*n + 1
    else:
        return n/2

biggest_chain = [0,0]

for i in range(1,1000000,1):
    chain_size = 1
    num = i
    while num != 1:
        chain_size += 1
        num = next_collatz(num)
    
    if(chain_size > biggest_chain[0]):
        biggest_chain = [chain_size, i]

print(biggest_chain)
