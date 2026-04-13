#include <bits/stdc++.h>
using namespace std;

void print2DVector(vector<vector<int>> &vec)
{
    for (const auto &row : vec)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
}

void search(vector<int> &startingPoint, int idx, string &res, string &word, vector<vector<char>> &board)
{
    if (res.size() == word.size() || idx == (board.size() * board[0].size()))
    {
        return;
    }

    int x = startingPoint[0];
    int y = startingPoint[1];

    int rows = board.size();
    int columns = board[0].size();

    vector<vector<int>> nextCharPositions;

    int nextX = x, nextY = y + 1;
    if (nextY < columns)
    {
        if (board[nextX][nextY] == word[idx])
            nextCharPositions.push_back({nextX, nextY});
    }

    nextX = x;
    nextY = y - 1;
    if (nextY >= 0)
    {
        if (board[nextX][nextY] == word[idx])
            nextCharPositions.push_back({nextX, nextY});
    }

    nextX = x + 1;
    nextY = y;
    if (nextX < rows)
    {
        if (board[nextX][nextY] == word[idx])
            nextCharPositions.push_back({nextX, nextY});
    }

    nextX = x - 1;
    nextY = y;
    if (nextX >= 0)
    {
        if (board[nextX][nextY] == word[idx])
            nextCharPositions.push_back({nextX, nextY});
    }

    if (nextCharPositions.size() == 0)
        return;

    for (int i = 0; i < nextCharPositions.size(); i++)
    {
        res.push_back(word[idx]);
        int temp = board[x][y];
        board[x][y] = '#';
        search(nextCharPositions[i], idx + 1, res, word, board);
        if (res.size() == word.size())
            break;
        res.pop_back();
        board[x][y] = temp;
    }
}

int main()
{
    vector<vector<char>> board = {
        {'a', 'b', 'c', 'e'},
        {'s', 'f', 'e', 's'},
        {'a', 'd', 'e', 'e'}};
    string word = "abceseeefs";

    string res = "";
    int idx = 0;

    vector<vector<int>> firstCharPositions;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == word[idx])
            {
                firstCharPositions.push_back({i, j});
            }
        }
    }

    if (firstCharPositions.size() > 0)
    {
        res.push_back(word[idx]);
        idx += 1;
    }

    for (int i = 0; i < firstCharPositions.size(); i++)
    {
        if (res.size() == word.size())
            break;

        int temp = board[firstCharPositions[i][0]][firstCharPositions[i][1]];
        board[firstCharPositions[i][0]][firstCharPositions[i][1]] = '#';
        search(firstCharPositions[i], idx, res, word, board);
        board[firstCharPositions[i][0]][firstCharPositions[i][1]] = temp;
    }

    if (res.size() == word.size())
        cout << true;
    else
        cout << false;
}