// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task B2 : Inserting and Delete in Singly Linked list

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertAtHead(Node*& head, int val)
{
    Node* n = new Node{val, head};
    head = n;
}

void deleteHead (Node*& head)
{
    if (!head) return;
    Node* temp = head;
    head = head ->next;
    delete temp;
}

void printList(Node* head)
{
    cout << "List: ";
    for (Node* cur = head; cur, cur != NULL; cur = cur->next)
        cout << cur->data << " ";
    cout << endl;
}

int main()
{
    Node* head = NULL;
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    printList(head);

    deleteHead(head);
    printList(head);

    return 0;
}