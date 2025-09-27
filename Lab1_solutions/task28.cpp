// 

#include<iostream>
using namespace std;

struct Node                  // Node structure
{
    int data;                // node ka data part
    Node* next;              // Pointer jo next node ko point karega 
};

int main()                   // main function
{
    int N = 10, M = 3;       // N = total log , M = har Mth person eliminate hoga 

    Node* head = new Node{1, NULL};    // Pehla node
    Node* curr = head;                 // Current pointer jo head se start karega
    for(int i = 2; i <= N; i++)        // Baaki nodes create karte hain // Loop 2 se N tak chalega
    {
        curr->next = new Node{i, NULL};   // Naya node create kar rahy hn 
        curr = curr->next;                // Current pointer ko next node par move kar rahy hn 
    }
    curr->next = head;                   // Circular linked list banate hn (last node ka next head ko point karega)
    Node* prev = curr;                  // Previous pointer jo last bode ko point karega
    curr = head;

    while (curr->next != curr)        // Jab tak sirf ek banda bachy ya node 
    {
        for (int i = 1; i < M; i++)  // M-1 times moves karte hn 
        {
            prev = curr;            // previous pointer ko current par set kar rahy hn 
            curr = curr->next;        // current pointer ko next par move kar rahy hn 
        }
        cout << "Removing: " << curr->data << endl;
        prev->next = curr->next;      // Current node ko list se hata dete hn 
        delete curr;                    // yahan hum ne Memory ko free kar diya 
        curr = prev->next;              // Current pointer ko next node par move kar rahy hn 
    } 
    cout << "Leader is: " << curr->data << endl; // winner ya phir josephus cave mein bacha raha 
    return 0;
}
