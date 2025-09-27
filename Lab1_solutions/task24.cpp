// Name :Asma Javaid
// Roll no. : 2024-csr-031
// Task B1 : Create and Traverse  a Linked List

#include<iostream>
using namespace std;

struct Node       
 {
    int data;      
    Node* next;   
}; 

int main()
{
    Node* head = new Node{10, NULL};       
    Node* second = new Node{20, NULL};     
    Node* third = new Node{30,NULL};       
    Node* fourth = new Node{40,NULL};      

    head->next = second;                   
    second->next = third;                 
    third->next = fourth;                  

    cout << "Linked List: ";
    Node* temp = head;                 
    while(temp != NULL)                 
    {
        cout << temp->data << " ";          
        temp = temp->next;           
    }
    return 0;
}