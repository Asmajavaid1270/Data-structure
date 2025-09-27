// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 3: Array of Pointers(names)

#include<iostream>   
using namespace std;

int main()
{
   const char* names[] = {"Ali", "Sara", "Azeem", "Noor", "Hamza"};    // Ek array of pointers jo strings ko point kar raha hai
   int n = sizeof(names) / sizeof(names[0]);                           // Array ke size ko calculate kar rahe hain
  

   for (int i = 0; i < n; i++) {
       cout << "names[" << i << "]: " << names[i] << "\n";   // Har naam ko print kar rahe hain
           }
  
  
    const char* replacement = "Fatima";  
    names[2] = replacement;                                  // Array ke teesre element ko "Fatima" se replace kar rahe hain
     
    cout << "After change, names[2]: " << names[2] << "\n";  // Update ke baad teesre naam ko print kar rahe hain
    return 0;
}