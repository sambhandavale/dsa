#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
    vector<int> num1;
    vector<int> num2;
    int value1 = 1;
    int value2 = 1;

    while (uniqueCnt1 > 0) {
        if (value1 % divisor1 != 0 &&
            find(num2.begin(), num2.end(), value1) == num2.end()) {
            num1.push_back(value1);
            uniqueCnt1--;
        }
        value1++;
    }

    while (uniqueCnt2 > 0) {
        if (value2 % divisor2 != 0 &&
            find(num1.begin(), num1.end(), value2) == num1.end()) {
            num2.push_back(value2);
            uniqueCnt2--;
        }
        value2++;
    }

    return max(num1.back(), num2.back());
}

int main(){
    cout << minimizeSet(12,3,2,10) << '\n';
}