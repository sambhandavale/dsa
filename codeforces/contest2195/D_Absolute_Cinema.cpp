#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<ll> f(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> f[i];
    }

    if (n == 2) {
        cout << f[2] << " " << f[1] << "\n";
        return;
    }

    vector<ll> a(n + 1);
    ll sum_f1 = 0;
    ll sum_fn = 0;
    for (int i = 2; i < n; ++i) {
        a[i] = (f[i - 1] + f[i + 1] - 2 * f[i]) / 2;
        sum_f1 += a[i] * (i - 1);
        sum_fn += a[i] * (n - i);
    }

    a[n] = (f[1] - sum_f1) / (n - 1);
    a[1] = (f[n] - sum_fn) / (n - 1);

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}