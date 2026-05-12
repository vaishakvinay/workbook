def annotate(garden):
    if not garden:
        return []

    rows = len(garden)
    cols = len(garden[0])

 
    for row in garden:
        if len(row) != cols:
            raise ValueError("The board is invalid with current input.")
        for ch in row:
            if ch not in (" ", "*"):
                raise ValueError("The board is invalid with current input.")

    result = []

    for i in range(rows):
        new_row = ""

        for j in range(cols):
            if garden[i][j] == "*":
                new_row += "*"
            else:
                count = 0

                # check 8 neighbors
                for di in [-1, 0, 1]:
                    for dj in [-1, 0, 1]:
                        ni = i + di
                        nj = j + dj

                        if 0 <= ni < rows and 0 <= nj < cols:
                            if garden[ni][nj] == "*":
                                count += 1

                if count == 0:
                    new_row += " "
                else:
                    new_row += str(count)

        result.append(new_row)

    return result

    
    
