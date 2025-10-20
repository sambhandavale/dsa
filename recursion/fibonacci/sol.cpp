#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n, int a, int b){
    if(n<=0){
        return;
    }

    cout << a << ' ';

    fibonacci(n-1,b,a+b);
}

int main(){
    int n = 2;
    fibonacci(n, 1, 1);
    cout << '\n';
    return 0;
}