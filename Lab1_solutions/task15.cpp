// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 15: Stack isEmpty

#include <iostream>
using namespace std;

#define MAX 5
int A[MAX], top = -1;

bool isEmpty() {
    return top == -1;       // Agar top -1 hai to stack empty hai
}

int main() {
    cout << (isEmpty() ? "Stack is Empty\n" : "Stack is Not Empty\n");  // Initially stack empty hai

                             // Ek element push karte hain
    A[++top] = 10;

    cout << (isEmpty() ? "Stack is Empty\n" : "Stack is Not Empty\n");
}
