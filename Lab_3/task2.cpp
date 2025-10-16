
//Name: Asma Javaid
//Roll No: 2024-BCS-031
//Task 2: STACK ADT IMPLEMENTATION using ARRAY (Fixed Size)


#include<iostream>
using namespace std;

#define MAX_SIZE 5

class StackArray {
private:
       int data[MAX_SIZE];
       int top;
public:
       StackArray() : top(-1) {}
       void push (int vol){
        if (top == MAX_SIZE - 1){
            cout << "\nERROR: STACK OVERFLOW! Cannot push " << vol << "(Array is full)." << endl;
            return ;
        }
        data[++top] = vol;
        cout << "Pushed: " << vol << endl;
           }
        int pop(){
            if (top == -1){
                cout << "\nERROR: STACK UNDERFLOW! (STACK is empty)." << endl;
                return -1;
            }
            return data[top--];
        }
        int peek() const {
            if (top == -1)return -1;
            return data[top];
        }
        void print()const {
            cout << "StackArray (TOP->BOT): [ ";
            for (int i = top;  i>= 0; --i){

                cout << data[i] << (i == 0 ? " " : ",");
            }
            cout <<  " ] " << endl;
        }
};

int main(){
    cout << "---Task 2 Demonstration ---" << endl;
    StackArray stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.print();
    cout << "Popped Value : " << stack.pop()  << endl;
    stack.print();
    return 0;
}