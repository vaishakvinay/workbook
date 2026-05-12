def tick(matrix):
    if not matrix:
        return []

    rows = len(matrix)
    cols = len(matrix[0])

    new_matrix = [[0] * cols for _ in range(rows)]

    for i in range(rows):
        for j in range(cols):

            
            live_neighbors = 0

            for di in [-1, 0, 1]:
                for dj in [-1, 0, 1]:

                    if di == 0 and dj == 0:
                        continue  

                    ni = i + di
                    nj = j + dj

                    if 0 <= ni < rows and 0 <= nj < cols:
                        live_neighbors += matrix[ni][nj]

            
            if matrix[i][j] == 1:
                if live_neighbors in (2, 3):
                    new_matrix[i][j] = 1
                else:
                    new_matrix[i][j] = 0
            else:
                if live_neighbors == 3:
                    new_matrix[i][j] = 1

    return new_matrix

















                
