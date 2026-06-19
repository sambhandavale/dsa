#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int x)
    {
        val = x;
        next = nullptr;
        prev = nullptr;
    }

    Node(int x, Node *next_node)
    {
        val = x;
        next = next_node;
        prev = nullptr;
    }

    Node(int x, Node *next_node, Node *prev_node)
    {
        val = x;
        next = next_node;
        prev = prev_node;
    }
};

class DLL
{
public:
    Node *head;

    DLL()
    {
        head = nullptr;
    }

    DLL(vector<int> arr)
    {
        Node *head = new Node(arr[0]);
        Node *curr = head;

        for (int i = 1; i < arr.size(); i++)
        {
            Node *newnode = new Node(arr[i], nullptr, curr);
            curr->next = newnode;
            curr = newnode;
        }
    }

    void printLL()
    {
        Node *curr = head;

        while (curr)
        {
            cout << curr->val << ' ';
            curr = curr->next;
        }
    }

    void insertBeforeHead(int val)
    {
        Node *curr = head;
        Node *newnode = new Node(val, curr);
        curr->prev = newnode;
        head = newnode;
    }

    void deleteNode(int num)
    {
        Node *curr = head;
        while (curr->val != num)
        {
            curr = curr->next;
        }

        if (curr->prev != nullptr)
        {
            curr->prev->next = curr->next;
        }
        else
        {
            head = curr->next;
        }
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    DLL *d1 = new DLL(arr);
    d1->insertBeforeHead(0);
    d1->printLL();
    cout << '\n';
    d1->deleteNode(3);
    d1->printLL();
}