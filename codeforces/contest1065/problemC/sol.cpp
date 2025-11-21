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
        
        vector<int> a(n);
        for (int i = 0;i < n;++i){
            cin >> a[i];
        }
        
        vector<int> b(n);
        for (int i = 0;i < n;++i){
            cin >> b[i];
        }

        int diff_count = 0;
        int last_diff_i = -1;

        for (int i = 0;i < n;++i) {
            if (a[i] != b[i]) {
                diff_count++;
                last_diff_i = i + 1;
            }
        }

        if (diff_count % 2 == 0) {
            cout << "Tie" << "\n";
        } else {
            if (last_diff_i % 2 != 0) {
                cout << "Ajisai" << "\n";
            } else {
                cout << "Mai" << "\n";
            }
        }
    }
}