#weight conversion program

weight = float(input("enter the weight   :"))
unit = input("enter the unit in kilograms or pounds   (K or L )   :").upper()


if unit == 'K':
    weight = weight*2.205
    unit='Lbs'
elif unit == 'L':
    weight = weight/2.205
    unit = 'Kgs'
else :
    print("not valid")
    exit() 
    
print("the converted weight is : ",round(weight,2),unit)