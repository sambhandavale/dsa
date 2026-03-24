#include<bits/stdc++.h>
using namespace std;

void combination(string digits, unordered_map<char, string>& map, vector<string>& result, string ans, int idx){
    if(ans.length() == digits.length()){
        cout << ans << '\n';
        result.push_back(ans);
        return;
    }

    string currentString = map[digits[idx]];

    for(int i = 0; i < currentString.length(); i++){
        ans.push_back(currentString[i]);
        combination(digits, map, result, ans, idx+1);
        ans.pop_back();
    }
}

int main(){
    string digits = "23";
    unordered_map<char, string> map = {
        {'2', "abc"},{'3', "def"},{'4', "ghi"},{'5',"jkl"},
        {'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
    };

    vector<string> result;
    string ans;
    combination(digits, map, result, ans, 0);
}