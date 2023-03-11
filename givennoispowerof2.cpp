//write a program to check if a given no. is power of 2.
#include <iostream>
using namespace std;

    bool ispowerof(int n)
    {
        return (n && !(n & n - 1));
    }

int main()
{
   
   cout << ispowerof(16) << endl;//true
   cout << ispowerof(14) << endl;//false
    return 0;
}