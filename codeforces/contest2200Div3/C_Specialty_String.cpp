#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> stack;
        for(int i = 0; i < n; i++){
            int ss = stack.size();
            if(ss != 0 && stack.back() == s[i]){
                stack.pop_back();
            }
            else stack.push_back(s[i]);
        }
        if(stack.size() != 0) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
}