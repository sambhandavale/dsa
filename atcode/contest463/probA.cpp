#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x % 16 == 0 && y % 9 == 0)
        cout << "Yes";
    else
        cout << "No";
}