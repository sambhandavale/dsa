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
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        bool found_winner = false;

        for (int bit = 20; bit >= 0; --bit) {
            int diff_count = 0;
            int last_diff_i = -1;

            for (int i = 0; i < n; ++i) {
                int bit_a = (a[i] >> bit) & 1;
                int bit_b = (b[i] >> bit) & 1;

                if (bit_a != bit_b) {
                    diff_count++;
                    last_diff_i = i + 1;
                }
            }

            if (diff_count % 2 == 0) {
                continue;
            }

            if (last_diff_i % 2 != 0) {
                cout << "Ajisai" << "\n";
            } else {
                cout << "Mai" << "\n";
            }
            
            found_winner = true;
            break;
        }

        if (!found_winner) {
            cout << "Tie" << "\n";
        }
    }
    return 0;
}