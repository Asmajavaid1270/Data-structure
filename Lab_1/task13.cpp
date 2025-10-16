// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 13: Stack Pop

#include <iostream>
using namespace std;

#define MAX 5          // Stack ka size
int A[MAX];            // Stack ke liye array
int top = -1;          // Initially stack empty hai

void push(int x) {
    if (top == MAX - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        A[++top] = x;
        cout << x << " pushed into stack." << endl;
    }
}

int pop() {
    if (top == -1) {                          // Agar stack empty hai
        cout << "Stack Underflow!" << endl;
        return -1;                            // Error value return karte hain
    }
    return A[top--];                          // Top element return karo aur top ko decrement karo
}

void display() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;    
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++)            // for loop jo 0 se top tak chalega
    {
        cout << A[i] << " ";                  // Stack ke har element ko print kar rahe hain
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    cout << "Popped element: " << pop() << endl;   // Element pop kar rahe hain
    display();                                      

    cout << "Popped element: " << pop() << endl;   // Element pop kar rahe hain
    display();

    cout << "Popped element: " << pop() << endl;   // Element pop kar rahe hain
    display();

    cout << "Popped element: " << pop() << endl;    // Underflow hoga

    return 0;
}