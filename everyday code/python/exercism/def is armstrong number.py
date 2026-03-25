def is_armstrong_number(number):
    digits = len(str(number))
    total = 0
    for digit in str(number):
        total += int(digit) **digits
    return total == number
