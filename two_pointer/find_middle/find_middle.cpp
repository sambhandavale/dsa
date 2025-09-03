#include <iostream>
#include <vector>
using namespace std;

int getMiddleIndexValue(const vector<int>& nums) {
    int slow = 0;
    int fast = 0;
    while (fast < nums.size() - 1) {
        slow = slow + 1;
        fast = fast + 2;
    }
    return nums[slow];
}

int main() {
    vector<int> nums = {1,2,3,4,5,6};
    cout << getMiddleIndexValue(nums) << '\n';
    return 0;
}
