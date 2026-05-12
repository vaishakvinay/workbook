def convert(input_grid):
    rows = input_grid

    
    if len(rows) % 4 != 0:
        raise ValueError("Number of input lines is not a multiple of four")

    
    if len(rows[0]) % 3 != 0:
        raise ValueError("Number of input columns is not a multiple of three")

    # digit patterns
    patterns = {
        " _ | ||_|   ": "0",
        "     |  |   ": "1",
        " _  _||_    ": "2",
        " _  _| _|   ": "3",
        "   |_|  |   ": "4",
        " _ |_  _|   ": "5",
        " _ |_ |_|   ": "6",
        " _   |  |   ": "7",
        " _ |_||_|   ": "8",
        " _ |_| _|   ": "9",
    }

    result = []

    
    for i in range(0, len(rows), 4):
        block = rows[i:i+4]
        number = ""

      
        for col in range(0, len(block[0]), 3):
            digit = (
                block[0][col:col+3] +
                block[1][col:col+3] +
                block[2][col:col+3] +
                block[3][col:col+3]
            )

            digit_char = patterns.get(digit, "?")
            number += digit_char

        result.append(number)

    return ",".join(result)
