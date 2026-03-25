Sum of digits 


It involves implementing a program that sums the digits of a non-negative integer. For example, the sum of 3433 digits is 13.

Digits can be a number, a string, or None. In case of None return an empty string ''.

To give you a little more excitement, the program will not only write the result of the sum, but also write all the sums used: 3 + 4 + 3 + 3 = 13.
def sum_of_digits(digits): 
    # your code here
    
    if digits == None :
        return ''
    
    digits = str(digits)  
    total=0
    expression=''
    
    for ch in digits:
        
        total+=int(ch)
        
        if expression =='':
            expression =ch
        else:
            expression= expression +' + '+ ch
            
        
            
    return f"{expression} = {total}"
