#include<bits/stdc++.h>
using namespace std;

int slicesAteByHao(int slices){
    if(slices <=2){
        return 0;
    }

    int m1 = slices/3;
    int m2 = (slices - m1) / 2; 
    int m3 = slices - m1 - m2;

    return m1 + slicesAteByHao(m3);
}

int main(){
    int t;
    cin >> t;
    while(t){
        t--;
        int slices;
        cin >> slices;
        cout << slicesAteByHao(slices) << '\n';
    }
}