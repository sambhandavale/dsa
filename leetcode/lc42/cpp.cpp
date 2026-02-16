#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    vector<int> prefixmax(n,0);
    vector<int> suffixmax(n,0);
    int capacity = 0;

    int currentMax = height[0];
    for(int i = 0; i < n; i++){
        currentMax = max(currentMax, height[i]);
        prefixmax[i] = currentMax;
    }

    currentMax = height[n-1];
    for(int i = n - 1; i >= 0; i--){
        currentMax = max(currentMax, height[i]);
        suffixmax[i] = currentMax;
    }

    for(int i = 0; i < n; i++){
        capacity += (min(prefixmax[i], suffixmax[i]) - height[i]);
    }

    return capacity;
}

int main(){
    vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(heights);
}
