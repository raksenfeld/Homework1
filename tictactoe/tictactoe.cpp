/****
 * *
* @file tictactoe.cpp
* @author Rita Aksenfeld <raksenfe@caltech.edu>
* @date 2017
*
* @brief Allows the user(s) to play a Tic-Tac-Toe game
* 
* This program prints to standard output and uses user input.
*
******/


#include <iostream>
#include "game.hpp"

using namespace std;

/**
 * @brief Creates an instance of the Game class to play Tic-Tac-Toe
 */
int main(int argc, char ** argv)
{
	while (true)
	{
		// Starts a new game
		Game new_game;
		new_game.Run();
		
		// Asks player if want another game
		char choice;
		cout << "Do you want to play again? (Y/N)" << endl;
		cin >> choice;
		
		// If no, breaks out of loop
		if (choice == 'N')
		{
			break;
		}
	}
    return 0;
}
