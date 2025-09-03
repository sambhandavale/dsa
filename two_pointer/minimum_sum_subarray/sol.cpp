#include <iostream>
#include <vector>
using namespace std;

int minimum_sum(vector<int>& nums, int target){
    if(nums.empty()) return 0;

    int left = 0;
    int right = 1;
    int minimum = -1;
    int sum = nums[left] + nums[right];

    while(right < nums.size()){
        if(sum < target){
            right++;
            if(right < nums.size()) sum += nums[right];
        }else{
            if(minimum == -1){
                minimum = right - left + 1;
            } else{
                minimum = (right - left + 1) < minimum ? right - left + 1 : minimum;
            } 
            sum = sum - nums[left];
            left++;
        }
    }

    return minimum;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 11;
    if(nums.size() > 1){
        cout << minimum_sum(nums,target) << '\n';   
    } else{
        cout << -1 << '\n';
    }
    return 0;
}
