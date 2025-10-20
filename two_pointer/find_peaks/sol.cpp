#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> values = {11,12,17,12,10,10,4,9};
    int limit = 5;
    int peaks = 0;

    for(int i = 1; i < values.size() - 1; i++){
        int left_peak = abs(values[i] - values[i-1]);
        int right_peak = abs(values[i] - values[i+1]);

        if(left_peak >= limit && right_peak >= limit){
            peaks += 1;
        }
    }

    cout << peaks << '\n';
}