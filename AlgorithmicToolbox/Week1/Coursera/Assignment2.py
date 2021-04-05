n = input()
maxNumber = 0
maxSecondNumber = 0
aux = 0

numbers = input().split(" ")

for i in range(int(n)):
    if(maxNumber < int(numbers[i])):
        maxSecondNumber = maxNumber
        maxNumber = int(numbers[i])
    elif(maxSecondNumber < int(numbers[i])):
        maxSecondNumber = int(numbers[i])

maxProductUltraFast = maxNumber * maxSecondNumber

print(maxProductUltraFast)
