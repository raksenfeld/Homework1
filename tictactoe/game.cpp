/ game.cpp

/**
 * @brief Constructs a new tic-tac-toe game instance.
 */
Game::Game()
{
	Board board;
	char turn = 'X';   // Game always starts with 'X' going first
}

/**
 * @brief Sets up and plays a single session of Tic-Tac-Toe
 */
void Game::Run()
{
	while (true) // While the game is running
	{
		ShowBoard();   // Print board to console
		TakeTurn(turn);   // Current player takes turn
		// Check if that move ended the game
		char x = CheckGameOver();
		if (x != 'N')   // If move ended game
		{
			if (x == 'D')   // If there was a draw
			{
				cout << "Game Over: Draw" << endl;
			}
			else   // If someone won
			{
				cout << "Game Over: " << x << " Wins" << endl;
			}
		break;   // Ends while loop
		}
		// Switch turn:
		else if (turn == 'X')   {turn = 'O'};
		else {turn = 'X'};
	}
}

/**
 * @brief Prints the board so players can see current board state
 */
void Game::ShowBoard()
{
	cout << "  0 1 2" << endl;
	cout << " +-----+" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i << "|" << board.Query(i, 0) << " " 
		     << board.Query(i, 1) << " " 
		     << board.Query(i, 2)<< "|" << endl;
	}
	cout << " +-----+" << endl;
}

/**
 * @brief Allows current player to take their turn
 * 
 * Coordinates for move come from player input
 * 
 * @param piece the piece ('X' or 'O') to be placed
 */
void Game::TakeTurn(char piece)
{
	cout << "Player " << piece << "'s turn: " << endl;
	
	// Gets column coordinate from player
	int col;
	cout << "Enter column coordinate: " << endl;
	cin >> i;
	
	// Gets row coordinate from player
	int row;
	cout << "Enter row coordinate: " << endl;
	cin >> i;
	
	// Takes 'piece's turn on input coordinates
	board.Place(col, row, piece);
}

/**
 * @brief Checks if the game is over
 * 
 * @return the player who won ('X' or 'O'), 'D' if there was a draw,
 * //      or 'N' if no wins and no draw
 */
char Game::CheckGameOver()
{
	// Checks if there is a win
	if (board.CheckWin() != 'N')
	{
		return board.CheckWin();
	}
	// Checks if there is a draw
	else if (board.CheckDraw() == true)
	{
		return 'D';
	}
	// If no win or draw, return 'N'
	else
	{
		return 'N';
	}
}
