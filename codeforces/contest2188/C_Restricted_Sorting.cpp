#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<int> b = a;
        sort(b.begin(), b.end());

        if (a == b) {
            cout << -1 << "\n";
            continue;
        }

        int L = -1, R = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                if (L == -1) L = i;
                R = i;
            }
        }

        int min_val = a[L], max_val = a[L];
        for (int i = L; i <= R; ++i) {
            min_val = min(min_val, a[i]);
            max_val = max(max_val, a[i]);
        }

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                ans = (ans == 0) ? max(abs(a[i] - min_val), abs(a[i] - max_val)) 
                                 : min(ans, max(abs(a[i] - min_val), abs(a[i] - max_val)));
            }
        }
        cout << ans << "\n";
    }
    return 0;
}