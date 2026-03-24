#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void permutationsII(vector<int> arr, vector<int> ans, unordered_map<int,int> map, set<vector<int>>& result){
    int n = arr.size();
    if(ans.size() == n){
        result.insert(ans);
        return;
    }

    for(int i = 0; i < n; i++){
        if(map[arr[i]] == 1) continue;
        ans.push_back(arr[i]);
        map[arr[i]] = 1;
        permutationsII(arr,ans,map, result);
        map[arr[i]] = 0;
        ans.pop_back();
    }
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    set<vector<int>> result;
    unordered_map<int,int> map = {{1,0}, {2,0},{3,0}};
    permutationsII(arr,ans,map, result);
}