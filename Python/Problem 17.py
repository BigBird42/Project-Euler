numbers = {0:'', 1:'one', 2:'two', 3:'three', 4:'four', 5:'five', 6:'six', 7:'seven', 8:'eight', 9:'nine',
11:'eleven', 12:'twelve', 13:'thirteen', 14:'fourteen', 15:'fifteen', 16:'sixteen', 17:'seventeen', 18:'eighteen', 19:'nineteen',
10:'ten', 20:'twenty', 30:'thirty', 40:'forty', 50:'fifty', 60:'sixty', 70:'seventy', 80:'eighty', 90:'ninety',}

total = 0
for i in range(1,1000,1):
    num = i
    if num >= 100:
        total += len(numbers[int(num/100)]) + len('hundred')
        num %= 100
        if num:
            total += len('and')
    
    if num in numbers.keys():
        total += len(numbers[num])
        num = 0
    total += len(numbers[int(num/10)*10]) + len(numbers[num%10])

print(total + len('onethousand'))