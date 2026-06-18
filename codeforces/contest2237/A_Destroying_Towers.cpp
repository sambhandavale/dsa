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

        int ans = 0;
        int curr_min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int height;
            cin >> height;

            curr_min = min(curr_min, height);

            ans += curr_min;
        }

        cout << ans << "\n";
    }

    return 0;
}