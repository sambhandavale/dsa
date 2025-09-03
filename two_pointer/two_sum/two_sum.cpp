#include <iostream>
#include <vector>
using namespace std;

pair<int, int> twoSum(const vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum < target) {
            left++;
        } else if (sum > target) {
            right--;
        } else {
            return {left, right};
        }
    }
    return {-1, -1}; // if no pair found
}

int main() {
    vector<int> nums = {1,2,3,4,5};
    int target = 7;
    pair<int,int> result = twoSum(nums, target);
    
    if(result.first != -1)
        cout << result.first << ' ' << result.second << '\n';

    return 0;
}
