#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    public:
    Node(int value, Node* next){
        value = value;
        next = next;
    }

    public:
    Node(int value1){
        value = value1;
        next = nullptr;
    }
};

int main(){
    vector<int> nums = {1,2,3,4};
    Node y = Node(nums[0], nullptr);
    cout << y.value;
}
