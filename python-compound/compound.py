#compound interest calculator

import math


while True:
  r = float(input("Enter the rate (in decimal, e.g., 0.05 for 5%): "))
  if r<=0:
    print("enter a valid number : ")
  else:
    break



while True:
  p=float(input("enter the principle: "))
  if p<=0:
    print("enter a valid number : ")
  else:
    break

while True:
  t=float(input("enter the no of years: "))
  if t<=0:
    print("enter a valid number : ")
  else:
    break


while True:
  n=int(input("enter the no of times interest is compounded: "))
  if n<=0:
    print("enter a valid number : ")
  else:
    break

amount=p*pow(1+(r/n),n*t)

compound_interest= amount-p

print ("compound intrest is :",compound_interest)
print ("total amount is :",amount)