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
        if(n&1) cout << 0 << '\n';
        else cout << (n/4) + 1 << '\n';
    }
}