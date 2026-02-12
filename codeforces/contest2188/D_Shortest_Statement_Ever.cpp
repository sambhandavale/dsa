#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long common = x & y;
        if (common == 0) {
            cout << x << " " << y << "\n";
            continue;
        }

        int highest = 63 - __builtin_clzll(common);
        long long add = 1LL << highest;

        cout << x + add << " " << y << "\n";
    }
    return 0;
}
