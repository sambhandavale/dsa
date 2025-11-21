#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 1; i < n - 1; ++i) {
            if (a[i] == -1) {
                a[i] = 0;
            }
        }

        if (a[0] == -1 && a[n-1] == -1) {
            a[0] = 0;
            a[n-1] = 0;
        } else if (a[0] == -1) {
            a[0] = a[n-1];
        } else if (a[n-1] == -1) {
            a[n-1] = a[0];
        }

        cout << abs(a[n-1] - a[0]) << "\n";

        for (int i = 0; i < n; ++i) {
            cout << a[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}