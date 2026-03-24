#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

// v1
// void permutations(vector<int> arr, vector<int> ans, unordered_map<int,int> map, vector<vector<int>>& result){
//     int n = arr.size();
//     if(ans.size() == n){
//         cout << "Found - " << ' ';
//         printArr(ans);
//         result.push_back(ans);
//         return;
//     }

//     for(int i = 0; i < n; i++){
//         if(map[arr[i]] == 1) continue;
//         ans.push_back(arr[i]);
//         map[arr[i]] = 1;
//         permutations(arr,ans,map, result);
//         map[arr[i]] = 0;
//         ans.pop_back();
//     }
// }

// v2
void permutations(vector<int> arr, vector<int> ans, vector<vector<int>>& result, int idx){
    int n = arr.size();
    if(idx == n){
        cout << "Found - " << ' ';
        printArr(ans);
        result.push_back(ans);
        return;
    }

    for(int i = idx; i < n; i++){
        swap(ans[i], ans[idx]);
        permutations(arr,ans,result,idx+1);
        swap(ans[i], ans[idx]);
    }
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> ans = arr;
    vector<vector<int>> result;
    // unordered_map<int,int> map = {{1,0}, {2,0},{3,0}};
    permutations(arr,ans, result, 0);
}