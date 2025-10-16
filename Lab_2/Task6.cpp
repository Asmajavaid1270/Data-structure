// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 6 : Circular Linked List

#include<iostream>
using namespace std;

struct CNode 
{
    int data;
    CNode* next;
};

int main()
{
    int n = 5;
    CNode* head = new CNode {1, NULL};
    CNode* curr = head;

    for (int i = 2; i<= n; i++)
    {
        curr->next = new CNode{i, NULL};
        curr = curr->next;
    }
    curr->next = head;
    cout << "Circular List: ";
    curr = head;
    for (int i = 0; i < n; i++)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
    return 0;
}