// board.cpp

/**
 * @brief Constructs a new tic-tac-toe board.
 */
Board::Board()
{
	// Creates an array of 3 char arrays with 3 elts 
	//    'U' (for unoccupied) each 
	char squares[3][3] = {{'U', 'U', 'U'}, {'U', 'U', 'U'}, {'U', 'U', 'U'}};
}

/**
 * @brief Given board coordinates, return a square state (U, X, or O)
 * 
 * @param col the column coordinate for the board (0 = first column)
 * @param row the row coordinate for the board (0 = first row)
 * 
 * @return the piece at the specifiec coordinate (or 'U' if unoccupied)
 */
char Board::Query(int col, int row)
{
	return squares[col][row];
}

/**
 * @brief Places a game piece on the board at the specified coordinates
 * 
 * @param col the column coordinate for the board (0 = first column)
 * @param row the row coordinate for the board (0 = first row)
 * @param piece the piece ('X' or 'O') to be placed
 */
void Board::Place(int col, int row, char piece)
{
	squares[col][row] = piece;
}

/**
 * @brief Returns which player won, if any
 * 
 * @return the player who won ('X' or 'O') or 'N' if no wins
 */
char Board::CheckWin()
{
	// Call helper functions
	char wins = {CheckWinCol(), CheckWinRow(), CheckWinDiag()};
	for (int i = 0; i < 3; i++)
	{
		if (wins[i] == 'X' || wins[i] == 'O')
		{
			return wins[i];
		}
	}
	return 'N';
}


//** Begin helper functions for CheckWin **//

/**
 * @brief Checks if there is a win in each column
 * 
 * @return the player who won ('X' or 'O') or 'U' if no wins
 */
char Board::CheckWinCol()
{
	for (int i = 0; i < 3; i++)
	{
		if (squares[i][0] == squares[i][1] 
		   && squares[i][0] == squares[i][2]
		   && squares[i][0] != 'U')
		{
			return squares[i][0];
		}
	}
	return 'N';
}

/**
 * @brief
 * 
 * @return the player who won ('X' or 'O') or 'U' if no wins
 */
char Board::CheckWinRow()
{
	for (int i = 0; i < 3; i++)
	{
		if (squares[0][i] == squares[1][i] 
		   && squares[0][i] == squares[2][i]
		   && squares[0][i] != 'U')
		{
			return squares[0][i];
		}
	}
	return 'N';
}

/**
 * @brief
 * 
 * @return the player who won ('X' or 'O') or 'U' if no wins
 */
char Board::CheckWinDiag()
{
	if (((squares[1][1] == squares[0][0] 
		   && squares[1][1] == squares[2][2])
		   || (squares[1][1] == squares[2][0] 
		   && squares[1][1] == squares[0][2]))
		   && squares[1][1] != 'U')
		{
			return squares[1][1];
		}
	return 'N';
}

//** End helper functions for CheckWin **//

**
 * @brief
 */
bool Board::CheckDraw()
{
	//
}

/**
 * @brief
 */
char Board::Copy()
{
	//
}

