// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 12: Stack Push 

#include <iostream>
using namespace std;

#define MAX 5                                   // Stack ka maximum size

int A[MAX];                                     // Stack ke liye array
int top = -1;                                   // Initially stack empty hai (top = -1)

void push(int x) {                             // Function jo stack mein naya element push karega
    if (top == MAX - 1) {                      // Agar stack full hai
        cout << "Stack Overflow!" << endl;
        return;
    }
    A[++top] = x;                               // top ko increment karke element push karo
    cout << x << " pushed into stack." << endl;
}

void display() {                                 // Stack ke elements dikhane ka function
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);                                  // Yeh overflow karega (kyunki MAX = 5 hai)

    display();

    return 0;
}
