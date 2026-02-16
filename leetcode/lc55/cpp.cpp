#include<bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
    int farjump = 0;
    int n = nums.size();
    for(int i = 0; i < n-1; i++){
        farjump = max(farjump , i + nums[i]);
        if(i+1 > farjump) return false;
        if (farjump >= n - 1) return true;
    }
    return true;
}