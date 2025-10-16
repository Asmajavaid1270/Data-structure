// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 2:  Dynamic Arrays

#include <iostream>
using namespace std;

int main()
{
    int n;                          // Variable jisme user se array ka size lenge
    cout << "Enter size: ";         // User ko prompt kar rahe hain
    cin >> n;                       // User se size input le rahe hain

    int* y = new int[n];            // Dynamically ek array allocate kar rahe hain jiska size user ne diya hai
     
    for (int i = 0; i < n; i++)     // Loop 0 se n-1 tak chalega
    {
        y[i] = i + 1;               // Array ke har element ko uske index + 1 se initialize kar rahe hain
    }

    cout << "Dynamic Array : ";
    for (int i = 0; i < n; i++)     // Loop 0 se n-1 tak chalega
    {
        cout << y[i] << " ";       // Array ke har element ko print kar rahe hain
    }

    delete[] y;                    // Dynamically allocated memory ko free kar rahe hain
    return 0;
}