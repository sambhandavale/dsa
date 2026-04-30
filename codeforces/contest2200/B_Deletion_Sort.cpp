#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n,0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool asc = true;
        for(int i = 0; i < n - 1; i++){
            if(a[i] > a[i+1]){
                asc = false;
                break;
            }
        }
        if(asc){
            cout << n << '\n';
        } else{
            cout << 1 << '\n';
        }
    }
}