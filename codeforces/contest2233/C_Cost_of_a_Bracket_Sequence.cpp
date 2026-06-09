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
        string s, best_mask;
        cin >> s;
        vector<int> l, r;

        for (int i = 0; i < n; i++)
            (s[i] == '(' ? l : r).push_back(i);

        int min_cost = 1e9;

        for (int i = 0; i <= min(k, (int)l.size()); i++)
        {
            int j = k - i;
            if (j > r.size())
                continue;

            string mask(n, '0');
            for (int x = 0; x < i; x++)
                mask[l[x]] = '1';
            for (int x = 0; x < j; x++)
                mask[r[r.size() - 1 - x]] = '1';

            int open = 0, rbs = 0;
            for (int x = 0; x < n; x++)
            {
                if (mask[x] == '1')
                    continue;
                if (s[x] == '(')
                    open++;
                else if (open > 0)
                    open--, rbs += 2;
            }

            if (rbs < min_cost)
                min_cost = rbs, best_mask = mask;
        }

        cout << best_mask << "\n";
    }
    return 0;
}