#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[100005];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        int k = n / 2;
        long long sol = a[n-1] - a[0];

        for (int i = 0; i + k - 1 < n; i++) {
            long long diff = a[i + k - 1] - a[i];
            if (diff < sol) {
                sol = diff;
            }
        }

        cout << sol << "\n";
    }
    return 0;
}
