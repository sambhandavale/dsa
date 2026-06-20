#include <bits/stdc++.h>
using namespace std;

bool possible(int guess_gap, const vector<pair<int, int>> &cloths, int k)
{
    int picked = 0;
    int last_r = -2000000000;

    for (int i = 0; i < cloths.size(); i++)
    {
        int current_l = cloths[i].second;
        int current_r = cloths[i].first;

        if (current_l - last_r >= guess_gap)
        {
            picked++;
            last_r = current_r;
        }

        if (picked >= k)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> cloths(n);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        cloths[i] = {r, l};
    }

    sort(cloths.begin(), cloths.end());

    int low = 1, high = 1e9;
    int best_gap = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (possible(mid, cloths, k))
        {
            best_gap = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << best_gap << "\n";

    return 0;
}