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
        string s;
        cin >> s;
        char lastelement = s[s.length() - 1];

        int lastelementcount = 0;

        for(int i = 0; i<n;i++){
            if(s[i] == lastelement){
                lastelementcount++;
            }
        }

        cout << n - lastelementcount << '\n';
    }
}