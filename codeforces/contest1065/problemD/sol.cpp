#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<int> p(n);
            for (int i = 0; i < n; ++i) {
                cin >> p[i];
            }

            vector<int> pre_min(n);
            pre_min[0] = p[0];
            for (int i = 1; i < n; ++i) {
                pre_min[i] = min(pre_min[i - 1], p[i]);
            }

            vector<int> suf_max(n);
            suf_max[n - 1] = p[n - 1];
            for (int i = n - 2; i >= 0; --i) {
                suf_max[i] = max(suf_max[i + 1], p[i]);
            }

            bool possible = true;
            for (int i = 0; i < n - 1; ++i) {
                if (pre_min[i] > suf_max[i + 1]) {
                    possible = false;
                    break;
                }
            }

            if (possible) cout << "Yes" << "\n";
            else cout << "No" << "\n";
        }
    }
    return 0;
}