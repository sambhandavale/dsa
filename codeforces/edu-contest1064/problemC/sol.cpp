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

        vector<long long> a(n);
        vector<long long> P(n + 1, 0LL);
        long long initial_sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            initial_sum += a[i];
            P[i + 1] = P[i] + a[i];
        }

        long long max_gain = 0;
        
        long long max_f_so_far = -LLONG_MAX; 

        for (long long r = 1; r <= n; ++r) {
            long long f_r = r - (r * r) + P[r - 1];
            max_f_so_far = max(max_f_so_far, f_r);

            long long g_r = (r * r) + r - P[r];

            max_gain = max(max_gain, g_r + max_f_so_far);
        }

        cout << initial_sum + max_gain << "\n";
    }
    return 0;
}