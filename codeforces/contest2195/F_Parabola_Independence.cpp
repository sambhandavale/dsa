#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

struct Parabola {
    ll a, b, c;
    int id;
};

bool is_strictly_below(const Parabola& i, const Parabola& j) {
    ll da = i.a - j.a;
    ll db = i.b - j.b;
    ll dc = i.c - j.c;

    if (da == 0) {
        if (db != 0) return false; 
        return dc < 0; 
    }

    if (da > 0) return false; 
    
    ll discriminant = db * db - 4LL * da * dc;
    return discriminant < 0;
}

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<Parabola> f(n);
    for (int i = 0; i < n; ++i) {
        cin >> f[i].a >> f[i].b >> f[i].c;
        f[i].id = i;
    }

    vector<int> dp_up(n, 1);
    vector<int> dp_down(n, 1);

    vector<vector<int>> adj(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            if (is_strictly_below(f[i], f[j])) {
                adj[i].push_back(j);
            }
        }
    }

    vector<int> memo_up(n, -1);
    vector<int> memo_down(n, -1);

    auto get_down = [&](auto self, int u) -> int {
        if (memo_down[u] != -1) return memo_down[u];
        int res = 1;
        for (int v : adj[u]) {
            res = max(res, 1 + self(self, v));
        }
        return memo_down[u] = res;
    };

    vector<vector<int>> rev_adj(n);
    for(int i = 0; i < n; ++i) {
        for(int v : adj[i]) rev_adj[v].push_back(i);
    }

    auto get_up = [&](auto self, int u) -> int {
        if (memo_up[u] != -1) return memo_up[u];
        int res = 1;
        for (int v : rev_adj[u]) {
            res = max(res, 1 + self(self, v));
        }
        return memo_up[u] = res;
    };

    for (int i = 0; i < n; ++i) {
        int ans = get_up(get_up, i) + get_down(get_down, i) - 1;
        cout << ans << (i == n - 1 ? "" : " ");
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