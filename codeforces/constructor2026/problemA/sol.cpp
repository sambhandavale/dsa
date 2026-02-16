#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a * b == c){
            cout << "Yes" << '\n';
            cout << a << " " << b << " " << c << '\n';
        }

        else if(c * b == a){
            cout << "Yes" << '\n';
            cout << b << " " << c << " " << a << '\n';
        }

        else if(c * a == b){
            cout << "Yes" << '\n';
            cout << a << " " << c << " " << b << '\n';
        }

        else{
            cout << "No" << '\n';
        }
    }
}