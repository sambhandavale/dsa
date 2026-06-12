#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;

        int maxele = max(a, b), minele = min(a, b);
        int ans = 0;

        if (maxele - minele == 1)
            cout << 1 << '\n';
        else
        {
            while (maxele - minele > 1 && maxele != minele)
            {
                maxele /= x;
                ans++;

                if (minele > maxele)
                {
                    int temp = maxele;
                    maxele = minele;
                    minele = temp;
                }
            }
            if (maxele != minele)
                cout << ans + 1 << '\n';
            else
                cout << ans << '\n';
        }
    }
}