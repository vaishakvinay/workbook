#calculate  hypotenuse of a right angled triangle

import math

a=float(input("enter the distance a in cm : "))
b=float(input("enter the distance a in cm : "))

a=pow(a,2)
b=pow(b,2)

c = math.sqrt(a +b)

print("hypotenuse is : " ,round(c,2))