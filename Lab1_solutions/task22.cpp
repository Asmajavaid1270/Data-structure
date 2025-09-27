

#include<iostream>
using namespace std;

int main()
{
    int A[10] = {2,6,8,7,1};    
    int size = 5;             
    int pos = 0;              
    int val = 9;            

    for(int i = size;i >pos; --i)       
    {
        A[i]= A[i-1];                 
    }

    A[pos] = val ;                  
    size++;                        

    cout << "After insertion:  ";
    for (int i = 0; i < size; ++i)
        cout << A[i] << " ";
    cout << endl;
    return 0;                    
}
