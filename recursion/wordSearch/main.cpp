#include<bits/stdc++.h>
using namespace std;

void print2DVector(vector<vector<int>>& vec) {
    for (const auto& row : vec) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

void backtrack(vector<int>& start, vector<vector<char>>& board, string& word, string& myword){
    
}

int main(){
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };

    string word = "ABCCED";

    vector<vector<int>> firstApp;
    char firstLetter = word[0];
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[i].size(); j++){
            if(board[i][j] == firstLetter) firstApp.push_back({i,j});
        }
    }

    for(int i = 0; i < firstApp.size(); i++){
        string myword;
    }
}