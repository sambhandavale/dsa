#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll current_max;

void find_max(ll l, ll r, ll range_sum) {
    // If this entire range sum is not better than what we found, skip it
    if (range_sum <= current_max) {
        return;
    }

    // Base case: single element
    if (l == r) {
        current_max = max(current_max, range_sum);
        return;
    }

    ll mid = l + (r - l) / 2;

    // Query the left half
    cout << "? " << l << " " << mid << endl;
    ll left_sum;
    cin >> left_sum;
    if (left_sum == -1) exit(0);

    ll right_sum = range_sum - left_sum;

    // To optimize, visit the "heavier" side first to increase current_max quickly
    if (left_sum >= right_sum) {
        find_max(l, mid, left_sum);
        find_max(mid + 1, r, right_sum);
    } else {
        find_max(mid + 1, r, right_sum);
        find_max(l, mid, left_sum);
    }
}

void solve() {
    ll n;
    if (!(cin >> n)) return;

    // Get the total sum to start the recursion
    cout << "? 1 " << n << endl;
    ll total_sum;
    cin >> total_sum;
    if (total_sum == -1) exit(0);

    current_max = 0;
    find_max(1, n, total_sum);

    cout << "! " << current_max << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}