#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;

        long long t1 = (n + x + y - 1) / (x + y);

        long long t2;
        if (z * x >= n)
        {
            t2 = (n + x - 1) / x;
        }
        else
        {
            t2 = z + (n - z * x + x + 10 * y - 1) / (x + 10 * y);
        }

        cout << min(t1, t2) << "\n";
    }

    return 0;
}