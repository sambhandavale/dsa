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

        vector<int> a(n), b(n), s(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            s[i] = a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        sort(s.begin(), s.end());

        bool ok = true;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] > b[i])
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<bool> u(n, false);
        long long ans = 0;

        for (int j = 0; j < n; ++j)
        {
            int c = 0;
            int k = -1;

            for (int i = 0; i < n; ++i)
            {
                if (!u[i])
                {
                    if (a[i] <= b[j])
                    {
                        k = i;
                        break;
                    }
                    c++;
                }
            }

            ans += c;
            u[k] = true;
        }

        cout << ans << "\n";
    }

    return 0;
}