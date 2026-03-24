#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else {
            balance--;
        }
        if (balance < 0) return false;
    }

    return balance == 0;
}

void paren(int n,string& s, int op, int cl, vector<string> result){
    if(cl > op) return;
    if(s.length() == n && op == n/2 && cl == n/2){
        if(isValid(s)){
            result.push_back(s);
            cout << "Found - " << s << '\n';
        }
        return;
    }

    if(op != n/2){
        paren(n,s+='(',op+1,cl, result);
        s.pop_back();
    }

    if(cl != n/2){
        paren(n,s+=')',op,cl+1, result);
        s.pop_back();
    }
}

int main() {
    int n = 3;
    string s = ""; 
    vector<string> result;
    paren(n*2,s,0,0, result);
}