def is_armstrong_number(number):

    digits = len(str(number))
    temp = number
    total =0

    while temp >0 :
        digit= temp % 10
        total+=digit ** digits
        temp=temp//10

    return total == number
