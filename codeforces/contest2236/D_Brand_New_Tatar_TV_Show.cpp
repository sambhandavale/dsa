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
        vector<int> count(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            count[a]++;
        }

        vector<bool> l(n + 1, false);

        int true_count = 0;
        bool possible = false;

        for (int v = n; v >= 1; v--)
        {
            if (count[v] > 0)
            {
                if (true_count > 0)
                {
                    l[v] = false;
                }
                else
                {
                    l[v] = (count[v] % 2 != 0);
                }
            }
            else
            {
                l[v] = false;
            }

            if (count[v] > 0 && !l[v])
            {
                possible = true;
            }

            true_count += l[v];

            if (v + k <= n)
            {
                true_count -= l[v + k];
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