def is_palin(arg):
    arg = str(arg)
    for i in range(0, len(arg) // 2, 1):
        if(arg[i] != arg[-1 - i]):
            return False

    return True


temp = 0
biggest = 0
for i in range(100,1000,1):
    for j in range(100,1000,1):
        temp = i*j
        if (is_palin(temp) and temp > biggest):
            biggest = temp

print(biggest)
