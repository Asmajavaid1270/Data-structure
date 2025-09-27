#include <iostream>
using namespace std;

struct Node                                    // Node structure
 {
    int data;                                 // node ka data part
    Node* next;                               // Pointer jo next node ko point karega
};

int main() {
    int N=10, M=3;                             // N = total log, M = har Mth person eliminate hoga

    
    Node* head = new Node{1, NULL};           // Pehla node
    Node* curr = head;                        // Current pointer jo head se start karega
    for(int i=2; i<=N; i++)                   // Baaki nodes create karte hain // Loop 2 se N tak chalega
    {
        curr->next = new Node{i, NULL};      // Naya node create karte hain
        curr = curr->next;                   // Current pointer ko next node par move karte hain
    }
    curr->next = head;                       // Circular linked list banate hain (last node ka next head ko point karega)

    Node* prev = curr;                       // Previous pointer jo last node ko point karega
    curr = head;                             // current pointer ko head par reset karte hain


    while(curr->next != curr)                 // Jab tak sirf ek node bachi hai
    {
        for(int i=1; i<M; i++)                // M-1 times move karte hain
         {
            prev = curr;                      // previous pointer ko current par set karte hain
            curr = curr->next;                // current pointer ko next par move karte hain
        }
        cout << "Removing: " << curr->data << endl;
        prev->next = curr->next;              // Current node ko list se hata dete hain
        delete curr;                          // Memory free karte hain
        curr = prev->next;                    // Current pointer ko next node par move karte hain
    }
    cout << "Leader is: " << curr->data << endl;    // Last bacha hua node hi leader hai

    return 0;
}