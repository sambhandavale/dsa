#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        string compA = "";
        compA += a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                compA += a[i];
        }

        string compB = "";
        compB += b[0];
        for (int i = 1; i < n; i++)
        {
            if (b[i] != b[i - 1])
                compB += b[i];
        }

        int i = 0, j = 0;
        while (i < compA.size() && j < compB.size())
        {
            if (compA[i] == compB[j])
            {
                j++;
            }
            i++;
        }

        if (j == compB.size())
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }
    return 0;
}