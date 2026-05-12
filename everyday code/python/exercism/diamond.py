def rows(letter):
    n = ord(letter) - ord('A')
    width = 2*n + 1
    result = []

    # top
    for i in range(n+1):
        ch = chr(ord('A') + i)
        
        if i == 0:
            row = ch
        else:
            inner = " " * (2*i - 1)
            row = ch + inner + ch
        
        # center the row
        row = row.center(width)
        result.append(row)

    # bottom
    for i in range(n-1, -1, -1):
        ch = chr(ord('A') + i)
        
        if i == 0:
            row = ch
        else:
            inner = " " * (2*i - 1)
            row = ch + inner + ch
        
        row = row.center(width)
        result.append(row)

    return result
