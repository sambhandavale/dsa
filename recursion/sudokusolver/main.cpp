#include <bits/stdc++.h>
using namespace std;

int cells = 3;
int length = cells * cells;

struct cell
{
    int row;
    int col;
};

void printBoard(vector<vector<char>> &board)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }
}

bool isPossible(vector<vector<char>> &board, char value, cell &currentCell)
{
    int row = currentCell.row;
    int col = currentCell.col;
    for (int i = 0; i < cells * cells; i++)
    {
        if (board[i][col] == value)
            return false;
    }

    for (int i = 0; i < cells * cells; i++)
    {
        if (board[row][i] == value)
            return false;
    }

    int boxStartRow = (row / 3) * 3;
    int boxStartCol = (col / 3) * 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i + boxStartRow][j + boxStartCol] == value)
                return false;
        }
    }

    return true;
}

bool backtrack(vector<vector<char>> &board)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (board[i][j] == '.')
            {
                cell currentCell = {i, j};
                for (int k = 1; k < 10; k++)
                {
                    if (isPossible(board, k + '0', currentCell))
                    {
                        board[i][j] = k + '0';
                        if (backtrack(board))
                            return true;
                        board[i][j] = '.';
                    }
                }
                return false;
            }
        }
    }

    return true;
}

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    if (backtrack(board))
        cout << "Found It!!" << '\n';
    else
        cout << "Found It!!" << '\n';

    printBoard(board);
}