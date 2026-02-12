#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 2) {
            cout << "1 2\n";
            continue;
        }

        vector<int> p(n);
        int l = 1, r = n;

        for (int i = n - 1; i >= 0; i--) {
            if ((n - i) % 2 == 1) {
                p[i] = l++;
            } else {
                p[i] = r--;
            }
        }

        for (int x : p) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
