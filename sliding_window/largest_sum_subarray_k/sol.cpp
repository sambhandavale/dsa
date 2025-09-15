#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int find_largest_sum(vector<int>& nums, int window){
    int window_sum = accumulate(nums.begin(), nums.begin() + window, 0);
    int largest_sum = window_sum;
    for(int right = window; right < nums.size();right++){
        int left = right - window;
        window_sum -= nums[left];
        window_sum += nums[right];
        largest_sum = max(largest_sum, window_sum);
    }
    return largest_sum;
}

int main(){
    vector<int> nums = {1,2,3,7,4,1};
    int window = 3;

    cout << find_largest_sum(nums,window) << '\n';

    return 0;
}