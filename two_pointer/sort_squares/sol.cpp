#include <iostream>
#include <vector>
using namespace std;

vector<int> sort_squares(vector<int>& nums){
    int n = nums.size(); 
    vector<int> result(n); 
    int left = 0; 
    int right = n - 1; 
    int pos = n - 1; 
    while(left <= right) { 
        if(abs(nums[left]) > abs(nums[right])) { 
            result[pos] = nums[left] * nums[left]; 
            left++; 
        } else {
            result[pos] = nums[right] * nums[right]; 
            right--; 
        } 
        pos--; 
    }

    return result;
}

int main(){
    vector<int> nums = {-5,-3,-2,-1};

    nums = sort_squares(nums);

    for(int i=0;i<nums.size();i++){
        cout << nums[i] << ' ';
    }
    cout << '\n';
}