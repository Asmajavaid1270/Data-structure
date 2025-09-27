// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 14: Stack Peek

#include <iostream>
using namespace std;

#define MAX 5            // Stack ka maximum size
int A[MAX];              // Stack array
int top = -1;            // Initially stack empty hai

void push(int x) {                                          // Push function
    if (top == MAX - 1)                                     // Agar stack full hai
     {
        cout << "Stack Overflow!" << endl;                  // Overflow message print karo
    } else {
        A[++top] = x;                                       // Element push karo
        cout << x << " pushed into stack." << endl;
    }
}

int pop() {                                                  // Pop function
    if (top == -1)                                           // Agar stack empty hai
     {
        cout << "Stack Underflow!" << endl;                 // Underflow message print karo
        return -1;
    }
    return A[top--];                                       // Top element return karo aur top ko decrement karo
}

int peek() {                                       // Peek function (sirf top element dikhata hai, remove nahi karta)
    if (top == -1)                                 // Agar stack empty hai
     {
        cout << "Stack is empty!" << endl;        
        return -1;
    }
    return A[top];                                        // Top element return karo
}

void display() {                                          // Display function jo stack ke elements dikhata hai
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++)                      // for loop jo 0 se top tak chalega
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    cout << "Top element (peek): " << peek() << endl;

    cout << "Popped element: " << pop() << endl;
    cout << "Now top element (peek): " << peek() << endl;

    display();

    return 0;
}
