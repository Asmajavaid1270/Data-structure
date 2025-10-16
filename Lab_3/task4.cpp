//Name: Asma Javaid
//Roll No: 2024-BCS-031
// Task 4: ADT ABSTRACTION DEMONSTRATION

#include <iostream>
using namespace std;

   #define max_size 5

   class stackArray {
     private:
        int data[max_size];
        int top;
     public:
       
	    stackArray() : top(-1) {}
	    
    void push(int val) { 
        if (top == max_size - 1) { 
        cout << "StackArray Overflow. "; 
           return; 
        } 
		  data[++top] = val; 
    }
	int pop() { 
        
		if (top == -1) { 
           cout << "StackArray Underflow. "; 
            return -1; 
        } 
        return data[top--]; 
    }
    void print() const { 
        cout << "Array Stack: [ "; 
        for (int i = top; i >= 0; --i) 
            cout << data[i] << " "; 
        cout << "]" << endl; 
    }
};

   class sNode {
    public:
      int data;
      sNode* next;
      sNode(int val) : data(val), next(nullptr) {}
};

   class stackList { 
    private: 
    sNode* head; 
	 
    public: 
    stackList() : head(nullptr) {} 
    
    ~stackList() { 
        sNode* current = head; 
        
    while (current != nullptr) { 
        sNode* next_node = current->next; 
            delete current; 
            current = next_node; 
} 
    } 
void push(int val) { 
       sNode* newNode = new sNode(val); 
      newNode->next = head; 
        head = newNode; 
    } 
    
	int pop() { 
        
		if (head == nullptr) { 
            cout << "StackList Underflow. "; 
            return -1; 
        } 
        sNode* temp = head; 
        
		int val = temp->data; 
        head = head->next; 
        
	delete temp; 
    return val; 
    } 
void print() const { 
        sNode* current = head; 
        cout << "List Stack: [ "; 
        while (current != nullptr) { 
            cout << current->data << " "; 
            current = current->next; 
        } 
        cout << "]" << endl; 
    } 
};

void demonstrateADT(stackArray& arrayStack, stackList& listStack) {
    
	  cout << "Pushing 10 and 20 into both implementations." << endl;
    arrayStack.push(10);
    arrayStack.push(20);
      cout << "Array Stack Pop: " << arrayStack.pop() << endl;
    listStack.push(100);
    listStack.push(200);
       cout << "List Stack Pop: " << listStack.pop() << endl;
    arrayStack.print();
    listStack.print();
}

int main() {
    cout << "--- Task 4 Demonstration ---" << endl;
    stackArray stack1;
    stackList stack2;
    demonstrateADT(stack1, stack2);
    return 0;
}

