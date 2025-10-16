// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 1: Pointer to Pointer

#include<iostream>   // Input output library ko include kar rahe hain
using namespace std;

int main()
{
    int x = 42;     // Ek integer variable x ko 42 se initialize kar rahe hain
    int* p = &x;    // Ek pointer p jo x ke address ko point kar raha hai 
    int** q = &p;   // Ek pointer to pointer q jo p ke address ko point kar raha hai


    cout << "x: " << x << "\n";      // x ki value print kar rahe hain
    cout << "*p: " << *p << "\n";    // p ke through x ki value print kar rahe hain
    cout << "**q: " << **q << "\n";  // q ke through p ke through x ki value print kar rahe hain


    **q = 100;                // q ke through p ke through x ki value ko 100 se update kar rahe hain
    cout << "After **q = 100, x: " << x << "\n";  // Update ke baad x ki value print kar rahe hain
    return 0;                   // Program successful execution ka signal dene ke liye 0 return kar rahe
}