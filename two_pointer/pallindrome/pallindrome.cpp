#include <iostream>
#include <string>
using namespace std;

bool is_pallindrome(string word){
    int left = 0;
    int right = word.length() - 1;

    while(left < right){
        if(word[left] == word[right]){
            left++;
            right--;
        } else{
            return false;
        }
    }
    return true;
}

int main(){
    string word = "samas";
    cout << word << " is " << (is_pallindrome(word) ? "a Pallindrome" : "not a Pallindrome") << '\n';
    return 0;
}