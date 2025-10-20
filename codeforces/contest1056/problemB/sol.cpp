#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a >> b;

        if (b > a*a) {
            cout << "NO\n";
            continue;
        }
        if (a==2 && (b==1 || b==3)) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        int full_rows = b/a;
        int remaining = b%a;
        for (int i=0; i<a; i++) {
            string row = "";
            if (i<full_rows) {
                row = string(a,'U');
            } else if (i==full_rows && remaining>0) {
                row = string(remaining, 'U') + string(a - remaining,'L');
            } else {
                row = string(a,'L');
            }
            cout << row << "\n";
        }
    }
    return 0;
}
