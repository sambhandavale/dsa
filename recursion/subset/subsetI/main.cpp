#include<bits/stdc++.h>
using namespace std;

void print(vector<int> nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
}

void printSubsets(vector<int>& subsets, vector<int> nums, vector<vector<int>>& allsubsets, int idx){
    if(idx == nums.size()){
        allsubsets.push_back(subsets);
        return;
    }

    subsets.push_back(nums[idx]);
    printSubsets(subsets, nums, allsubsets, idx+1);
    subsets.pop_back();
    printSubsets(subsets, nums, allsubsets, idx+1);
}

int main(){
    vector<int> nums = {1,2,3};
    vector<int> subsets;
    vector<vector<int>> allsubsets;

    printSubsets(subsets, nums, allsubsets, 0);
    for(int i = 0; i < allsubsets.size(); i++){
        for(int j = 0; j < allsubsets[i].size(); j++){
            cout << nums[j] << " ";
        }
        cout << '\n';
    }
}