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
        int max = *max_element(a.begin(), a.end());
        int count = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == max) count++;
        }
        cout << count << '\n';
    }
}