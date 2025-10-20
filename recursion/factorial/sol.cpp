#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 1){
        return n;
    }

    return n * factorial(n-1);

}

int main(){
    int n = 3;
    cout << factorial(n) << '\n';
    return 0;
}