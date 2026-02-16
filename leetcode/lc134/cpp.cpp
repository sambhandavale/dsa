#include<bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();
    vector<int> dif(n,0);
    for(int i = 0; i < n; i++){
        dif[i] = gas[i] - cost[i];
    }

    int sum = accumulate(dif.begin(), dif.end(),0);
    if(sum < 0) return -1;

    int i = 0;
    int total = 0;
    int j = 0;
    while(i != n){
        if(total + dif[j] < 0){
            j++;
            i = 0;
            total = 0;
        }else{
            total += dif[j];
            if(j == n - 1) j = 0;
            else j++;
            i++;
        }
    }
    
    return j;
}