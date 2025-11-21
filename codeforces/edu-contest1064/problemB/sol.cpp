#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();

        bool in = false;
        for (int i = 0; i < n - 1; i++) {
            bool can_go_right = (s[i] == '>' || s[i] == '*');
            bool can_go_left = (s[i+1] == '<' || s[i+1] == '*');

            if (can_go_right && can_go_left) {
                in = true;
                break;
            }
        }

        if (in) {
            cout << -1 << "\n";
            continue;
        }
        
        vector<int> l_path(n, 0);
        vector<int> r_path(n, 0);

        for (int i = 0; i < n; i++) {
            if (s[i] == '>') {
                l_path[i] = 0;
            } else {
                if (i == 0) {
                    l_path[i] = 1; 
                } else {
                    l_path[i] = l_path[i-1] + 1; 
                }
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '<') {
                r_path[i] = 0;
            } else {
                if (i == n - 1) {
                    r_path[i] = 1;
                } else {
                    r_path[i] = r_path[i+1] + 1;
                }
            }
        }

        int max_time = 0;
        for (int i = 0; i < n; i++) {
            if (l_path[i] > max_time) {
                max_time = l_path[i];
            }
            if (r_path[i] > max_time) {
                max_time = r_path[i];
            }
        }

        cout << max_time << "\n";
    }
}