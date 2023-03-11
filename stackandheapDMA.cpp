#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = new int(); // allocate memory in heap
    *p = 10;
    delete (p); // deallocate memory
    p = new int[4];
    delete[] p;
    p = NULL;
    cout<<p<<endl;
    return 0;
}