// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 1: Insertng List into Array

#include <iostream>
using namespace std;

int main()
{
    int A[10] = {2, 6 , 8 , 7 , 1};    // Array A jisme pehle se 5 elements hain 
    int size = 5;                       // n variable jisme current number of elements hain


    int pos = 3, val = 9;          // pos variable jisme insertion position hain, val variable jisme insert karne wala value hain
    for (int i=size; i>pos; i--)  // Loop jo last element se pos tak chalega
    {
        A[i] = A[i-1];             // Har element ko ek position aage shift kar rahe hain
    }

    A[pos] = val;                        // pos position par val value insert kar rahe hain
    size++;                             // Size ko increment kar rahe hain kyunki ek naya element add hua hai

    cout << "Array after insertion: ";
    for (int i=0; i<size; i++)           // Loop jo 0 se size-1 tak chalega
    {
        cout << A[i] << " ";             // Array ke har element ko print kar rahe hain
    }
     
    return 0;
}