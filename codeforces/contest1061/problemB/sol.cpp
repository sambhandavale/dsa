#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t) {
        t--;
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<long long> queries(q);
        for (int i = 0; i < q; i++) {
            cin >> queries[i];
        }

        for (int i = 0; i < q; i++) {
            long long x = queries[i];
            int steps = 0;
            int pos = 0;

            while (x > 0) {
                if (s[pos] == 'A') {
                    x -= 1;
                } else {
                    x /= 2;
                }
                steps++;
                pos = (pos + 1) % n;
            }

            cout << steps << "\n";
        }

    }
    return 0;
}
