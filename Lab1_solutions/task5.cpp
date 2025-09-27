// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 5: Dangling Pointer(show the fix)

#include <iostream>
using namespace std;

int main() {
    int* p = new int(50);                        // Dynamically memory allocate kar rahe hain p ke liye 50 se
    cout << "*p before delete: " << *p << "\n";  // p ke through value print kar rahe hain

    delete p;                  // Dynamically allocated memory ko free kar rahe hain
    p = nullptr;              // Dangling pointer ko avoid karne ke liye p ko nullptr kar rahe hain

cout << "Pointer safely set to nullptr after delete.\n";

    return 0;
}

