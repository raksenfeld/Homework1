/**
* @brief A tic-tac-toe game class.
*/
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
