#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> height(n), leave_time(n);

    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;

        height[i] = h;
        leave_time[i] = m;
    }

    vector<int> suf_max(n + 1, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        suf_max[i] = max(suf_max[i + 1], height[i]);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;

        auto it = upper_bound(leave_time.begin(), leave_time.end(), t);

        int idx = distance(leave_time.begin(), it);

        cout << suf_max[idx] << "\n";
    }
}