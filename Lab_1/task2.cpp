// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 2: Dereferencing to change a pointer

#include<iostream>   
using namespace std;

int main()
{
    int a = 20;     // Ek integer variable a ko 20 se initialize kar rahe hain
    int* p = &a;    // Ek pointer p jo a ke address ko point kar raha hai
    
    cout << "a before: " << a << "\n";     // a ki value print kar rahe hain
    *p = *p + 5;                           // p ke through a ki value ko 5 se increment kar rahe hain
    cout << "a after: " << a << "\n";     // Update ke baad a ki value print kar rahe hain

    return 0;
}