#temperature conversion program

temperature = float(input("enter the temperature   :"))
unit = input("enter the unit in celcius or fareheit   ( C or F )   :").upper()


if unit == 'C':
    temperature = round((9 * temperature) / 5 + 32, 1)
    unit='F'
elif unit == 'F':
    temperature = round((temperature - 32) * 5 / 9, 1)
    unit = 'C'
else :
    print("not valid")
    exit() 

print("the converted temperature is : ",round(temperature,2),unit)