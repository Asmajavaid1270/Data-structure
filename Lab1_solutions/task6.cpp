// Name: Asma Javaid
// Roll no. : 2024-csr-031
// Task 6: Memory leak (good vs bad)

#include <iostream>
using namespace std;

void leaky()                       // Function jo memory leak karta hai
{
    int * data = new int[100];    // 100 integers ke liye memory allocate kar rahe hain
}


void fixed()                        // Function jo memory leak ko fix karta hai
{
    int * data = new int[100];     // 100 integers ke liye memory allocate kar rahe hain
    delete[] data;                // Dynamically allocated memory ko free kar rahe hain
}

int main ()
{
    for (int i = 0; i < 100000; i++) {
        leaky();                         // Memory leak function ko baar baar call kar rahe hain
    }
    cout << "Leaky  loop done (memory wasted).\n";

    for (int i = 0; i < 100000; i++) {
        fixed();                          // Fixed function ko baar baar call kar rahe hain
    } 
    cout << "Fixed loop done (no leaks).\n"; 
    return 0;
}

    