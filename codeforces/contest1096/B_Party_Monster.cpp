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

        string s;
        cin >> s;

        int op = 0;
        int cl = 0;

        for (auto &i : s)
        {
            if (i == '(')
                op++;
            else
                cl++;
        }

        if (op == cl)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}