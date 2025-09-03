#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> three_sum(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<vector<int>> result = {};

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0){ 
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }
                left++;
                right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            };
        }
    }

    return result;
}

int main(){
    vector<int> nums = {-4,-1,-1,0,1,2};
    vector<vector<int>> result = three_sum(nums);

    for(int i=0;i<result.size();i++){
        for(int j = 0; j < result[i].size();j++){
            cout << result[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}