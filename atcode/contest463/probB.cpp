#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char col;
    cin >> col;

    int found = false;

    for (int i = 0; i < n; i++)
    {
        if (found)
            break;
        string train;
        cin >> train;

        if (train[col - 65] == 'o')
            found = true;
    }

    if (found)
        cout << "Yes";
    else
        cout << "No";
}
