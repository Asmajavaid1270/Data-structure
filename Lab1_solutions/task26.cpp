// Name : Asma Javaid
// Roll no. : 2024-csr-031
// Task C1 : Doubly Linked List


#include<iostream>
using namespace std;

struct DNode
{
    int data;
    DNode* next;
    DNode* prev;
};

int main()
{
    DNode* head = new DNode{10, NULL, NULL};
    DNode* second = new DNode{20, NULL, head};

    head->next = second;

    DNode* third = new DNode{30, NULL, second};
    second->next = third;

    cout << "Forward: ";
    for(DNode* cur = head; cur; cur = cur ->next)
        cout << cur->data << " ";
    cout << endl;


    cout << "Backward: ";
    for (DNode* cur = third; cur; cur = cur->prev)
        cout << cur->data << " ";
    cout << endl;

    return 0;
}        