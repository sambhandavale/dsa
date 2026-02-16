#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

struct Node {
    int l, r, p;
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Node> tree(n + 1);
        tree[0].p = -1;
        for (int i = 0; i <= n; i++) {
            int l, r;
            cin >> l >> r;
            tree[i].l = l;
            tree[i].r = r;
            if (l != 0) tree[l].p = i;
            if (r != 0) tree[r].p = i;
        }

        vector<ll> sz(n + 1, 0);
        vector<int> order;
        vector<int> stack = {0};
        vector<int> visited(n + 1, 0);

        vector<int> q;
        q.push_back(0);
        int head = 0;
        while(head < q.size()){
            int u = q[head++];
            if(tree[u].l != 0){
                q.push_back(tree[u].l);
                q.push_back(tree[u].r);
            }
        }

        for (int i = n; i >= 0; i--) {
            int u = q[i];
            if (tree[u].l == 0) {
                sz[u] = 1;
            } else {
                sz[u] = (1 + 2 * sz[tree[u].l] + 2 * sz[tree[u].r]) % MOD;
            }
        }

        vector<ll> ans(n + 1, 0);
        for (int u : q) {
            if (u == 0) continue;
            int p = tree[u].p;
            if (p == 0) {
                ans[u] = 1;
            } else {
                if (u == tree[p].l) {
                    ans[u] = (ans[p] + 1) % MOD;
                } else {
                    ans[u] = (ans[p] + 1 + 2 * sz[tree[p].l]) % MOD;
                }
            }
        }

        vector<ll> final_ans(n + 1);
        for (int i = 1; i <= n; i++) {
            if (tree[i].l == 0) {
                final_ans[i] = ans[i];
            } else {
                ll val = (ans[i] + 2 * sz[tree[i].l] + 2 * sz[tree[i].r]) % MOD;
                final_ans[i] = val;
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << final_ans[i] << (i == n ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}