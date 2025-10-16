// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 3: Creating a linked list 

#include <iostream>
using namespace std;

struct Node {
    int data;           // Node ka data part 
    Node* next;        // Pointer jo next node ko point karega
};

int main()
{
    Node* head = new Node{10, NULL};   // Pehla node jisme data 10 hai aur next NULL hai
    Node* second = new Node{20, NULL};  // Dusra node jisme data 20 hai aur next NULL hai
    Node* third = new Node{30, NULL};   // Teesra node jisme data 30 hai aur next NULL hai


    head -> next = second;  // Pehle node ka next pointer dusre node ko point kar raha hai
    second -> next = third; // Dusre node ka next pointer teesre node ko point kar raha hai

    cout << "Linked List: ";
    Node*temp = head;              // Temporary pointer jo head se start karega
    while (temp != NULL) {         // Jab tak temp NULL nahi ho jata
        cout << temp->data << " "; // Current node ka data print kar rahe hain
        temp = temp->next;         // Temp ko next node par move kar rahe hain
    }
    return 0;
}