#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> p;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                p.push_back(i);
            }
        }

        if (p.empty()) {
            cout << (n + 2) / 3 << "\n";
            continue;
        }

        long long res = p.size();
        
        res += (p[0]) / 3;
        
        res += (n - 1 - p.back()) / 3;

        for (int i = 0; i < (int)p.size() - 1; i++) {
            int gap = p[i + 1] - p[i] - 1;
            if (gap >= 3) {
                res += (gap - 1) / 3;
            }
        }

        cout << res << "\n";
    }

    return 0;
}