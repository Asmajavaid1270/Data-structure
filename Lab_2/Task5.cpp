// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 5: Doubly Linked List

#include <iostream>
using namespace std;

struct DNode {
    int data;           // Node ka data part 
    DNode* next;        // Pointer jo next node ko point karega
    DNode* prev;        // Pointer jo previous node ko point karega
};

int main() {
                                                  // 3 nodes create kiye
    DNode* head = new DNode{10, NULL, NULL};      // Pehla node
    DNode* second = new DNode{20, NULL, NULL};    // Dusra node
    DNode* third = new DNode{30, NULL, NULL};     // Teesra node

// Linking (forward aur backward dono)
    head->next = second;                        // head ka next second ko point karega
    second->prev = head;                        // second ka prev head ko point karega

    second->next = third;                       // second ka next third ko point karega
    third->prev = second;                       // third ka prev second ko point karega

    
    cout << "Forward Traversal: ";              // Forward Traversal (head se aage ki taraf) 
    DNode* temp = head;                         // temp ko head par set kiya
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;                      // next node par move
    }
    cout << endl;

    
    cout << "Backward Traversal: ";             // Backward Traversal (tail se peeche ki taraf)
    temp = third;                               // tail (last node) se start
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;                      // previous node par move
    }

    return 0;
}
