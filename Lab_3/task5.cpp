//Name: Asma Javaid
//Roll No: 2024-BCS-031
// Task 5: STACK ADT IMPLEMENTATION using ARRAY (Fixed Size)

#include <iostream>
using namespace std;

#define MAX_SIZE 5
class StackArray {
private:
    int data[MAX_SIZE]; 
    int top;            
public:
    StackArray() : top(-1) {
        cout << "StackArray initialized (MAX Size: " << MAX_SIZE << ")" << endl;
    }
    void push(int val) {
        if (top == MAX_SIZE - 1) {
            cout << "\nERROR: STACK OVERFLOW! Cannot push " << val << " (Array is full)." << endl;
            return;
        }
        data[++top] = val;
        cout << "Pushed: " << val << endl;
    }
    int pop() {
        if (top == -1) {
            cout << "\nERROR: STACK UNDERFLOW! (Stack is empty)." << endl;
            return -1; 
        }

        return data[top--];
    }
    int peek() const {
        if (top == -1) return -1;
        return data[top];
    }
    void print() const {
        cout << "Stack (TOP->BOTTOM): [ ";
        for (int i = top; i >= 0; --i) {
            cout << data[i] << (i == 0 ? " " : ", ");
        }
        cout << "]" << endl;
    }
};

int main (){
    cout << "---TASK 5 : STACK ARRAY DEMO ---  "  << endl;
    StackArray myStack ;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.print();

    myStack.push(60);

    cout << "\nPeek (Top value): " <<  myStack.peek() << endl;
    cout << "Popped value: " << myStack.pop() << endl;

    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();

    cout << "\n--- Demo Complete ---" << endl;
    return 0 ;
    
}