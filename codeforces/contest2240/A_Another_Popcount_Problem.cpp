#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int pc = 0;
        int cost = 1;

        while (n > 0)
        {
            int take = min(k, n / cost);

            if (take == 0)
                break;

            pc += take;
            n -= take * cost;
            cost *= 2;
        }

        cout << pc << "\n";
    }
}