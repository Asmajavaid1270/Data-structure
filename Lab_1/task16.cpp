// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 16: Stack isFull

#include <iostream>
using namespace std;

#define MAX 5
int A[MAX], top = -1;

bool isFull() {
    return top == MAX - 1;   // Agar top MAX-1 hai to stack full hai
}

int main() {
    cout << (isFull() ? "Stack is Full\n" : "Stack is Not Full\n");

    // Stack ko fill karte hain
    for (int i = 0; i < MAX; i++) {
        A[++top] = i + 1;
    }

    cout << (isFull() ? "Stack is Full\n" : "Stack is Not Full\n");
}

