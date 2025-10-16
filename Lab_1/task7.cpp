// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 7: Arrays

#include<iostream>
using namespace std;

int main()
{
    int x [6];                   // Aik array declare kar rahe hain jisme 5 integers store ho sakte hain
     
    for (int j = 0; j < 6; j++)  // Loop 0 se 5 tak chalega
    {
            x[j] = j * 2;        // Array ke har element ko uske index ke double se initialize kar rahe hain     
     }
        
cout << "Array elements:" ;
for (int j = 0; j < 6; j++)     // Loop 0 se 5 tak chalega
{
    cout << x[j] << " ";       // Array ke har element ko print kar rahe hain
}
}