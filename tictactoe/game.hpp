/**
* @brief A tic-tac-toe game class.
*/

#include "board.hpp"

class Game
{
private:
    Board board;
    char turn;
public:
    Game();
    ~Game();  
    void Run();
    void ShowBoard();
    void TakeTurn(char piece);
    char CheckGameOver();
};
