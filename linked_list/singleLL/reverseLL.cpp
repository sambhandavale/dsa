#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        next = nullptr;
    }
};

class LL
{
public:
    Node *head = nullptr;

    LL(vector<int> arr)
    {
        head = new Node(arr[0]);
        Node *curr = head;

        for (int i = 1; i < arr.size(); i++)
        {
            curr->next = new Node(arr[i]);
            curr = curr->next;
        }
    }

    void reverse()
    {
        Node *curr = head;
        Node *prev = nullptr;
        Node *next = nullptr;

        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
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
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    LL *l1 = new LL(arr);
    l1->printLL();
    cout << '\n';
    l1->reverse();
    l1->printLL();
}
