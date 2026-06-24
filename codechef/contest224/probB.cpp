#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> carrots(n);

        for (int i = 0; i < n; i++)
        {
            cin >> carrots[i];
        }

        int rightsum = 0;
        int leftsum = 0;

        for (int i = 0; i < l - 1; i++)
        {
            rightsum += carrots[i];
        }

        for (int i = r; i < n; i++)
        {
            leftsum += carrots[i];
        }

        cout << max(rightsum, leftsum) << '\n';
    }
}
