// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 19:  Delete from Array

#include <iostream>
using namespace std;

int main() {
    int x[6] = {10, 20, 30, 40, 50, 60};    // aik static array jisme 6 elements hain
    int n = 6; 

    int pos = 2;                            // pos variable jisme deletion position hain
 
    
    for (int i = pos; i < n - 1; i++)       // Loop jo pos se n-2 tak chalega
    {
        x[i] = x[i + 1];                    // Har element ko ek position peeche shift kar rahe hain
    }
    n--; 


    cout << "After Deletion: ";
    for (int i = 0; i < n; i++)            // Loop jo 0 se n-1 tak chalega
     {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}