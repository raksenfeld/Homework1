/**
* @brief A tic-tac-toe board class.
*/
class Board
{
private:
    char squares[3][3];
public:
    Board();
    ~Board();
    char Query(int col, int row);
    void Place(int col, int row, char piece);
    char CheckWin();
    char CheckWinCol();
    char CheckWinRow();
    char CheckWinDiag();
    bool CheckDraw();
};
