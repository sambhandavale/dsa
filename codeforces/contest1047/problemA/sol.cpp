#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;

        while (k--) {
            if ((x - 1) % 3 == 0 || ((x - 1) / 3) % 2 == 1) {
                x = (x - 1) / 3;
            } else {
                x = x * 2;
            }
        }
        cout << x << '\n';
    }
    return 0;
}
