// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 4: Dynamic Memory + Average


#include <iostream>
using namespace std;
 
int main() {
    int n;
    cout << "How many scores? ";  //User se scores ki tadaad puch rahe hain
    cin >> n;                     //User se input le rahe hain

    int* scores = new int[n];     //Dynamic memory allocate kar rahe hain scores ke liye
      
    cout << "Enter " << n << " scores:\n";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];         //Scores ko input kar rahe hain
    }

    long long sum = 0;            //Sum ko 0 se initialize kar rahe hain
    for (int i = 0; i < n; i++) {
        sum += scores[i];         //Scores ka sum calculate kar rahe hain
    }

    cout << "Average = " << (double)sum / n << "\n";  //Average calculate karke print kar rahe hain
      
    delete[] scores;              //Dynamically allocated memory ko free kar rahe hain
    scores = nullptr;           //Pointer ko null kar rahe hain
     
    return 0;
}