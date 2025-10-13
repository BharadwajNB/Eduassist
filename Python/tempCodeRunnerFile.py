n = int(input("How many numbers?"))
numbers = []

for i in range(n):
  num = int(input("Enter number{i+1}: "))
  numbers.append(num)
  
print("Numbers List:",numbers)