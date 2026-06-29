// Odd Sum Game

// The numbers 1,2,…,n are written on a board. You must choose exactly k different numbers from them.
// Determine whether it is possible for the sum of the chosen numbers to be odd.

#include <bits/stdc++.h>
using namespace std;

string solve()
{
    int n, k;
    cin >> n >> k;

    int odds = n & 1 ? (n / 2) + 1 : n / 2;
    int even = n - odds;

    int min_odds_needed = max(1, k - even);

    if (min_odds_needed % 2 == 0)
    {
        min_odds_needed++;
    }

    int max_odds_possible = min(odds, k);

    if (min_odds_needed <= max_odds_possible)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
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