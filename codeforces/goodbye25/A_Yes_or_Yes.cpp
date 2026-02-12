#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int c = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == 'Y'){
                c++;
            }
        }

        if(c == 0 || c == 1){
            cout << "YES" << '\n';
        } else{
            cout << "NO" << '\n';
        }
    }
}