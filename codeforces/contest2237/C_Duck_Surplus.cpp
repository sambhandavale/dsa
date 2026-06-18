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

        long long m = 0;
        for (int i = 0; i < n; ++i)
        {
            long long a;
            cin >> a;
            if (a >= m)
            {
                m = a;
            }
            else
            {
                m += a;
            }
        }

        cout << m << "\n";
    }

    return 0;
}