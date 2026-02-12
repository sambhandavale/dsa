#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i + 1;
        }

        sort(a.begin(), a.end());

        if (m <= 0 || m >= n) {
            cout << -1 << "\n";
            continue;
        }

        cout << n - m << "\n";
        for (int i = 0; i < n - m; i++) {
            cout << a[i].second << " " << a[i + 1].second << "\n";
        }
    }
    return 0;
}