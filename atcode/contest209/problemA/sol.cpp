#include <bits/stdc++.h>
using namespace std;

bool hasValidSubstring(const string &s, int K) {
    int n = s.size();
    vector<int> bal(n + 1, 0);
    for (int i = 0; i < n; i++) {
        bal[i + 1] = bal[i] + (s[i] == '(' ? 1 : -1);
    }

    vector<int> prefixMin(n + 1);
    prefixMin[0] = bal[0];
    for (int i = 1; i <= n; i++) prefixMin[i] = min(prefixMin[i - 1], bal[i]);

    for (int i = 0; i + K <= n; i++) {
        int j = i + K;
        if (bal[j] - bal[i] != 0) continue;

        int mn = INT_MAX;
        for (int k = i + 1; k <= j; k++) mn = min(mn, bal[k]);

        if (mn >= bal[i]) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string S;
        int K;
        cin >> S >> K;
        int n = S.size();
        bool ok = hasValidSubstring(S, K);

        if ((n - K) % 2 == 0) {
            cout << (ok ? "Second" : "First") << "\n";
        } else {
            cout << "First\n";
        }
    }
    return 0;
}
