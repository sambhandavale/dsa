#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long a;
        cin >> n >> a;

        int count_smaller = 0;
        int count_larger = 0;

        for (int i = 0; i < n; i++) {
            long long v;
            cin >> v;
            if (v < a) {
                count_smaller++;
            } else if (v > a) {
                count_larger++;
            }
        }

        if (count_larger >= count_smaller) {
            cout << a + 1 << "\n";
        } else {
            cout << a - 1 << "\n";
        }
    }
}