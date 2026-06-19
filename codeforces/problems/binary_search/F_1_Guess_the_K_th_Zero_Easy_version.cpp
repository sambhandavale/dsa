#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    while (t--)
    {
        int k;
        cin >> k;

        int low = 1, high = n;
        int ans = -1;

        while (low <= high)
        {
            if (low == high)
            {
                ans = low;
                break;
            }

            int mid = low + (high - low) / 2;

            cout << "? 1 " << mid << "\n";

            int sum;
            cin >> sum;

            if (sum == -1)
            {
                return 0;
            }

            int zeros = mid - sum;

            if (zeros >= k)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << "! " << ans << "\n";
    }
}