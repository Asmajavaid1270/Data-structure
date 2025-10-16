// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 5: students marks manager 



#include <iostream>
using namespace std;

int main() {
    int n;                                                 // n variable jisme number of students ka data store karenge
    cout << "Enter number of students: ";                 // User se number of students ka input lenge
    cin >> n; 

    int* marks = new int[n];                             // Dynamically ek array allocate kar rahe hain jisme n students ke marks store karenge


    for (int i = 0; i < n; i++)                            // Loop jo 0 se n-1 tak chalega
     {
        cout << "Enter mark of student " << i + 1 << ": ";
        cin >> marks[i]; 
    }

   
    cout << "\nMarks entered: ";
    for (int i = 0; i < n; i++)                           // Loop jo 0 se n-1 tak chalega
    {
        cout << marks[i] << " ";
    }
    cout << endl;


    int sum = 0, maxMark = marks[0], minMark = marks[0]; // sum variable jisme total marks ka sum store karenge, maxMark jisme highest mark store karenge, minMark jisme lowest mark store karenge
    for (int i = 0; i < n; i++)                          // Loop jo 0 se n-1 tak chalega
     {
        sum += marks[i];                                 // Marks ka sum calculate kar rahe hain
        if (marks[i] > maxMark) maxMark = marks[i];      // Highest aur lowest marks calculate kar rahe hain
        if (marks[i] < minMark) minMark = marks[i];      // Highest aur lowest marks calculate kar rahe hain
    }

    cout << "Average = " << (sum / (float)n) << endl;    // Average calculate kar rahe hain
    cout << "Highest = " << maxMark << endl;
    cout << "Lowest = " << minMark << endl;

    delete[] marks;                                     // Dynamically allocated memory ko free kar rahe hain
    return 0; 
}
