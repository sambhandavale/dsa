#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long power(long long base, long long exp)
{
    long long res = 1;
    base %= MOD;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long total = n * m;
        long long total_sub = (n - r + 1) * (m - c + 1);
        long long ans = total - total_sub;

        long long res = ans % (MOD - 1);
        if (res < 0)
        {
            res += (MOD - 1);
        }

        cout << power(2, res) << "\n";
    }
}