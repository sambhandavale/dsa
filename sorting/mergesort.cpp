#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &arr, int i, int j)
{
    if (i >= j)
    {
        return;
    }

    int mid = (i + j) / 2;

    mergeSort(arr, i, mid);
    mergeSort(arr, mid + 1, j);

    vector<int> temp;

    int left = i;
    int right = mid + 1;

    while (left <= mid && right <= j)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= j)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int a = i; a <= j; a++)
    {
        arr[a] = temp[a - i];
    }
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    mergeSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }
}