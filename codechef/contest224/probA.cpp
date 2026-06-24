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

        int i = 1;

        while (i + k <= n)
        {
            i += k;
        }

        cout << i << '\n';
    }
}
