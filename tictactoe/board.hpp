/**
* @brief A tic-tac-toe board class.
*/
class Board
{
private:
    char squares[][];
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
    char Copy();
};
