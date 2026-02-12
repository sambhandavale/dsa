#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        if (!(cin >> n)) break;
        
        vector<long long> a(n);
        long long min_val = 2e18; 

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < min_val) {
                min_val = a[i];
            }
        }

        long long k1 = min_val;

        long long k2 = 2e18;
        bool found_larger = false;
        for (int i = 0; i < n; i++) {
            if (a[i] > min_val) {
                k2 = min(k2, a[i] - min_val);
                found_larger = true;
            }
        }

        if (!found_larger) {
            cout << k1 << "\n";
        } else {
            cout << max(k1, k2) << "\n";
        }
    }
    return 0;
}