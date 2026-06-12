#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> ones(k, 0);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ones[i % k]++;
            }
        }

        bool possible = true;
        for (int i = 0; i < k; i++)
        {
            if (ones[i] % 2 != 0)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}