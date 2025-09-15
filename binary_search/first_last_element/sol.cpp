#include <bits/stdc++.h>
using namespace std;

int find_first(vector<int>& arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    int first = -1;
    
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == target){
            first = mid;
            right = mid - 1;
        } else if(arr[mid] < target){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }

    return first;
}

int find_last(vector<int>& arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    int last = -1;
    
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == target){
            last = mid;
            left = mid + 1;
        } else if(arr[mid] < target){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }

    return last;
}

int main(){
    vector<int> arr = {5,8,8,8,8,10};
    int target = 5;
    int first = find_first(arr,target);
    int last = find_last(arr,target);
    cout << first << ' ' << last << ' ' << '\n';
}