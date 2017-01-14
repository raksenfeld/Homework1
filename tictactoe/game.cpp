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
		// Switche turn:
		else if (turn == 'X')   {turn = 'O'};
		else {turn = 'X'};
	}
}

/**
 * @brief Prints the board so players can see current board state
 */
void Game::ShowBoard()
{
	//
}

/**
 * @brief Allows current player to take their turn
 */
void Game::TakeTurn(char piece)
{
	//
}

/**
 * @brief Checks if the game is over
 * 
 * @return the player who won ('X' or 'O'), 'D' if there was a draw,
 * //      or 'N' if no wins and no draw
 */
char Game::CheckGameOver()
{
	//
}
