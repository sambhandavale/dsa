#include <bits/stdc++.h>
using namespace std;

long long solve()
{
    long long n;
    cin >> n;

    if (n == 1)
        return 1;
    if (n == 2)
        return 5;

    long long ans = 0;

    for (long long b = 1; b <= n; b++)
    {
        long long mul = n / b;
        ans += mul * mul;
    }

    return ans;
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