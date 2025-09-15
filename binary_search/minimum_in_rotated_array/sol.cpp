#include <bits/stdc++.h>
using namespace std;

int minimum_rotated_array(vector<int>& arr){
    int left = 0;
    int right = arr.size() - 1;
    int smallest = -1;

    while(left <= right){
        int mid = (right + left) / 2;
        if(arr[mid] <= arr[arr.size() - 1]){
            smallest = mid;
            right = mid - 1;
        } else{
            left = mid + 1;
        }
    }

    return smallest;
}

int main(){
    vector<int> arr = {5,6,7,8,1};

    cout << "Smallest Index is " << minimum_rotated_array(arr) << '\n';

    return 0;
}