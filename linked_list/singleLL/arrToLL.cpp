#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    public:
    Node(int value1, Node* next1){
        value = value1;
        next = next1;
    }

    public:
    Node(int value1){
        value = value1;
        next = nullptr;
    }
};


class LL{
public:
    Node* head;
    int length;

public:
    LL(Node* head){
        this->head = head;
        this->length = 1;
    }

    string searchFor(int value){
        Node* currentNode = this->head;
        while(currentNode){
            if(currentNode->value == value){
                return "Present";
            }
            currentNode = currentNode->next;
        }
        return "Not Present";
    }

    void arrToLL(vector<int>& nums){
        Node* marker = this->head;

        for(int i = 1; i < nums.size(); i++){
            Node* newnode = new Node(nums[i]);
            marker->next = newnode;
            marker = newnode;
            this->length++;
        }
    }

    void printLL(){
        Node* currentNode = this->head;
        cout << "LL -> ";
        while(currentNode){
            cout << currentNode->value << ' ';
            currentNode = currentNode->next;
        }
        cout << '\n';
    }
};

int main(){
    vector<int> nums = {1,2,3};
    Node* head = new Node(nums[0]);
    LL L1(head);
    L1.arrToLL(nums);
    L1.printLL();
}

