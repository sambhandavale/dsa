#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> nums;
        nums.push_back(a[0]);

        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                nums.push_back(a[i]);
        }

        unordered_map<int, int> freq;
        for (int x : nums)
            freq[x]++;

        int bad = 0;
        for (auto &p : freq)
        {
            if (p.second > 1)
                bad++;
        }

        if (bad <= 2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}