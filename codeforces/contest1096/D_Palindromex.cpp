#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(2 * n);
        for (int i = 0; i < 2 * n; i++)
            cin >> arr[i];

        int ans = 0;
        vector<int> freq(n + 1, 0);

        auto expand = [&](int l, int r)
        {
            for (int i = l; i <= r; i++)
            {
                freq[arr[i]]++;
            }

            int mex = 0;
            while (mex <= n && freq[mex] > 0)
                mex++;
            ans = max(ans, mex);

            while (l - 1 >= 0 && r + 1 < 2 * n && arr[l - 1] == arr[r + 1])
            {
                l--;
                r++;
                freq[arr[l]]++;
                freq[arr[r]]++;

                while (mex <= n && freq[mex] > 0)
                    mex++;
                ans = max(ans, mex);
            }

            for (int i = l; i <= r; i++)
            {
                freq[arr[i]]--;
            }
        };

        for (int c = 0; c < 2 * n; c++)
        {
            expand(c, c);
            if (c + 1 < 2 * n && arr[c] == arr[c + 1])
                expand(c, c + 1);
        }

        cout << ans << "\n";
    }
    return 0;
}