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
        vector<int> a(n);

        map<int, int> reach_count;
        map<int, int> cost_sum;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int val = a[i];
            int steps = 0;

            while (true)
            {
                reach_count[val]++;
                cost_sum[val] += steps;

                if (val == 0)
                    break;

                val /= 2;
                steps++;
            }
        }

        int min_cost = -1;
        for (const auto &entry : reach_count)
        {
            int val = entry.first;
            int count = entry.second;
            if (count == n)
            {
                if (min_cost == -1 || cost_sum[val] < min_cost)
                {
                    min_cost = cost_sum[val];
                }
            }
        }

        cout << min_cost << "\n";
    }
}
