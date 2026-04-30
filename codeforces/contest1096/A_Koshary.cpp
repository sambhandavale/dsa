#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if ((x % 2 == 0 && y % 2 == 0) || (x % 2 == 0 && y % 2 != 0) || (x % 2 != 0 && y % 2 == 0))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}