def gamestate(board):

    x_count = 0
    o_count = 0

    
    for row in board:
        x_count += row.count("X")
        o_count += row.count("O")

   
    if o_count > x_count:
        raise ValueError("Wrong turn order: O started")

   
    if x_count > o_count + 1:
        raise ValueError("Wrong turn order: X went twice")

    # helper function to check winner
    def wins(player):

        # rows
        for i in range(3):
            if board[i][0] == board[i][1] == board[i][2] == player:
                return True

        # columns
        for j in range(3):
            if board[0][j] == board[1][j] == board[2][j] == player:
                return True

        # main diagonal
        if board[0][0] == board[1][1] == board[2][2] == player:
            return True

        # opposite diagonal
        if board[0][2] == board[1][1] == board[2][0] == player:
            return True

        return False

    x_win = wins("X")
    o_win = wins("O")

   
    if x_win and o_win:
        raise ValueError(
            "Impossible board: game should have ended after the game was won"
        )

  
    if x_win and x_count != o_count + 1:
        raise ValueError(
            "Impossible board: game should have ended after the game was won"
        )

    if o_win and x_count != o_count:
        raise ValueError(
            "Impossible board: game should have ended after the game was won"
        )

    
    if x_win or o_win:
        return "win"

    
    for row in board:
        if " " in row:
            return "ongoing"

    
    return "draw"
