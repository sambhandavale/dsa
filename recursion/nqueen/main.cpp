#include<bits/stdc++.h>
using namespace std;

void printGrid(vector<string>& grid) {
    for (const auto& row : grid) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << "\n";
    }
}

bool canPlace(int r, int c, vector<string>& grid) {
    int n = grid.size();

    for (int j = c - 1; j >= 0; j--) {
        if (grid[r][j] == 'Q') return false;
    }

    for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
        if (grid[i][j] == 'Q') return false;
    }

    for (int i = r + 1, j = c - 1; i < n && j >= 0; i++, j--) {
        if (grid[i][j] == 'Q') return false;
    }

    return true;
}

void trace(int n, vector<string>& grid, vector<vector<string>>& result, int r, int c){    
    if(c == n){
        printGrid(grid);
        result.push_back(grid);
        return;
    }
    for(int i = 0; i < n; i++){
        if(!canPlace(i,c,grid)){
            continue;
        }
        grid[i][c] = 'Q';
        trace(n, grid, result, i, c+1);
        grid[i][c] = '.';
    }
}

int main(){
    int n = 4;
    vector<string> grid(n,string(n, '.'));
    vector<vector<string>> result;
    trace(n,grid,result,0,0);
}

// void printGrid(vector<vector<string>>& grid) {
//     for (const auto& row : grid) {
//         for (const auto& cell : row) {
//             cout << cell << " ";
//         }
//         cout << "\n";
//     }
// }

// bool canPlace(int r, int c, vector<vector<string>>& grid) {
//     int n = grid.size();

//     for (int j = c - 1; j >= 0; j--) {
//         if (grid[r][j] == "Q") return false;
//     }

//     for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
//         if (grid[i][j] == "Q") return false;
//     }

//     for (int i = r + 1, j = c - 1; i < n && j >= 0; i++, j--) {
//         if (grid[i][j] == "Q") return false;
//     }

//     return true;
// }

// void trace(int n, vector<vector<string>>& grid, vector<vector<vector<string>>>& result, int r, int c){    
//     if(c == n){
//         result.push_back(grid);
//         return;
//     }
//     for(int i = 0; i < n; i++){
//         if(!canPlace(i,c,grid)){
//             continue;
//         }
//         grid[i][c] = "Q";
//         trace(n, grid, result, i, c+1);
//         grid[i][c] = ".";
//     }
// }

// int main(){
//     int n = 4;
//     vector<vector<string>> grid(n, vector<string>(n,"."));
//     vector<vector<vector<string>>> result;
//     trace(n,grid,result,0,0);
// }