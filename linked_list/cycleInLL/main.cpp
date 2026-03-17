#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    public:
    Node(int val, Node* next){
        this->val = val;
        this->next = next;
    }

    public:
    Node(int val){
        this->val = val;
        next = nullptr;
    }
};

class LL{
    public:
    Node* head;

    public:
    LL(){
        head = nullptr;
    }

    public:
    Node* addNode(int val, Node* next = nullptr){
        Node* currentNode = head;
        Node* newNode = new Node(val, next);

        if(head == nullptr){
            head = newNode;
            return newNode;
        }

        while(currentNode->next != nullptr){
            currentNode = currentNode->next;
        }

        currentNode->next = newNode;
        return newNode;
    }

    public:
    void printLL(){
        Node* currentNode = head;

        while(currentNode != nullptr){
            cout << currentNode->val << ' ';
            currentNode = currentNode->next;
        }
        cout << '\n';
    }

    public:
    bool checkCycle(){
        unordered_map<Node*, int> visited;
        Node* currentNode = head;
        while(currentNode != nullptr){
            if(visited[currentNode]) return true;
            visited[currentNode] = true;
            currentNode = currentNode->next;
        }
        return false;
    }

    public:
    bool checkCycle2(){
        Node* slow = head;
        Node* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) return true;
        }

        return false;
    }

};

int main(){
    LL* l1 = new LL();
    l1->addNode(1);
    Node* n2 = l1->addNode(2);
    l1->addNode(3);
    l1->addNode(4,n2);
    cout << l1->checkCycle2() << endl;
    return 0;
}