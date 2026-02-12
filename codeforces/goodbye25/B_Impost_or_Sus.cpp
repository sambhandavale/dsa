#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        for(char c : s) assert(c == 's' || c == 'u');

        int n = s.length();

        int c = 0;
        if(s[0] == 'u') {
            s[0] = 's';
            c++;
        }
        if(s[n-1] == 'u') {
            s[n-1] = 's';
            c++;
        }

        int l = 0, r = 1;
        while(l != s.length() - 1){
            if(s[r] != 's'){
                r++;
            } else{
                int k = r - l - 1;
                c += (k / 2);
                l = r;
                r++;
            }
        }
        cout << c << '\n';
    }
}