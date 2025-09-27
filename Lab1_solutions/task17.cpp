// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 17: Stack isEmpty/isFull

#include <iostream>
using namespace std;

#define MAX 5          // Stack ka maximum size
int A[MAX];            // Stack ke liye array
int top = -1;          // Initially stack empty hai

bool isEmpty() {
    return top == -1;   // Agar top -1 hai to stack empty hai
}

bool isFull() {
    return top == MAX - 1; // Agar top MAX-1 hai to stack full hai
}

void push(int x) {
    if (isFull()) {
        cout << "Stack Overflow!" << endl;
    } else {
        A[++top] = x;
        cout << x << " pushed into stack." << endl;
    }
}

int pop() {
    if (isEmpty()) {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    return A[top--];
}

int peek() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return A[top];
}

void display() {
    if (isEmpty()) {
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
    cout << "Initially: isEmpty = " << (isEmpty() ? "Yes" : "No") << endl;

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    cout << "After pushing 5 elements: isFull = " << (isFull() ? "Yes" : "No") << endl;

    display();

    cout << "Popped element: " << pop() << endl;
    cout << "Now top element (peek): " << peek() << endl;

    cout << "Now: isEmpty = " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Now: isFull = " << (isFull() ? "Yes" : "No") << endl;

    return 0;
}
