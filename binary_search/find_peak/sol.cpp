#include <bits/stdc++.h>
using namespace std;

int find_peak(vector<int>& arr){
    int left = 0, right = arr.size() - 1;

    while(left < right){
        int mid = (left + right) / 2;
        if(arr[mid] > arr[mid + 1]){
            right = mid;
        } else{
            left = mid + 1;
        }
    }
    return right;
}

int main(){
    vector<int> arr = {3,2,1};

    cout << find_peak(arr) << '\n';
}