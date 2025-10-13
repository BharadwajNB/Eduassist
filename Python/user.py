num = int(input("Enter value of n: "))
even = 0
odd = 0
for i in range(0,num):
    input("Enter number: ")
    if i % 2 == 0:
        even += 1
    else:
        odd += 1
print("Even numbers:", even)
print("Odd numbers:", odd)