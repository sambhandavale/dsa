#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> a(n), b(n);
    int asum = 0, bsum = 0, allless = 0;
    bool rearrange = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        asum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (a[i] < b[i])
        {
            rearrange = true;
            allless++;
        }
        bsum += b[i];
    }

    if (allless == n)
        return -1;

    int dif = asum - bsum;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
            return -1;
    }

    if (rearrange)
        return c + dif;
    else
        return dif;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cout << solve() << '\n';
    }
}