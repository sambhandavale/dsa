#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& nums) {
    int a = 0;
    int b = 0;
    while (b < nums.size()) {
        if (nums[b] != 0) {
            int temp = nums[a];
            nums[a] = nums[b];
            nums[b] = temp;
            a++;
        }
        b++;
    }
}

int main() {
    vector<int> nums = {1,0,2,0,0,7};
    moveZerosToEnd(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << ' ';
    }
    cout << '\n';
}
