#create a calcualtor for 2 numbers

a = float(input("enter first number: "))

b = float(input("enter second number: "))


operator= input("enter which operation you want to do  : +,-,*,/ : ")

if operator == '+':
    c = a + b
elif operator == '-':
    c = a - b
elif operator == '*':
    c = a * b
elif operator == '/':
    if b != 0:  
        c = a / b
    else:
        print("Error: Division by zero is not allowed.")
        c = None
else:
    print("Invalid operator.")
    c = None


if c is not None:
    print(f"{a} {operator} {b} = {c}")
