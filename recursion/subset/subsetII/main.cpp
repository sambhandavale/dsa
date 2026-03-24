#include<bits/stdc++.h>
using namespace std;

void print(vector<int> nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << '\n';
}

// v1
// void printSubset(vector<int> nums, vector<int>& subset, set<vector<int>>& result, int idx){
//     if(idx == nums.size()){
//         result.insert(subset);
//         return;
//     }

//     subset.push_back(nums[idx]);
//     printSubset(nums, subset, result, idx+1);
//     subset.pop_back();
//     printSubset(nums, subset, result, idx+1);
// }

void printSubset(vector<int> nums, vector<int>& subset, vector<vector<int>>& result, int idx){
    if(idx == nums.size()){
        result.push_back(subset);
        return;
    }

    subset.push_back(nums[idx]);
    printSubset(nums, subset, result, idx+1);
    subset.pop_back();
    printSubset(nums, subset, result, idx+1);
}

int main(){
    vector<int> nums = {1,2,2};
    sort(nums.begin(), nums.end());
    vector<int> subset;
    vector<vector<int>> result;

    printSubset(nums,subset,result,0);
}