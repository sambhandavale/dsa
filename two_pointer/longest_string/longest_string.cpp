#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int longest_substring(string word){
    int left = 0;
    int right = 0;
    int largest = 0;
    unordered_set<char> visited;    

    while(right < word.length()){
        if(visited.find(word[right]) == visited.end()){
            visited.insert(word[right]);
            largest = max(largest, (int)visited.size());
            right++;
        } else{
            while(word[left] != word[right]){
                visited.erase(word[left]);
                left++;
            }
            left++;
            visited.insert(word[right]);
            right++;
        }
    }

    return largest;
}

int main(){
    string word = "aaa";

    cout << longest_substring(word) << '\n';

    return 0;
}