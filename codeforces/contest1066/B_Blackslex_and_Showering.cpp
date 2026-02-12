#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long total_dist = 0;
        for (int i = 0; i < n - 1; i++) {
            total_dist += abs(a[i+1] - a[i]);
        }

        long long max_reduction = abs(a[1] - a[0]);

        max_reduction = max(max_reduction, (long long)abs(a[n-1] - a[n-2]));

        for (int i = 1; i < n - 1; i++) {
            long long current_segments = abs(a[i] - a[i-1]) + abs(a[i+1] - a[i]);
            long long new_segment = abs(a[i+1] - a[i-1]);
            long long reduction = current_segments - new_segment;
            max_reduction = max(max_reduction, reduction);
        }

        cout << total_dist - max_reduction << "\n";
    }
    return 0;
}