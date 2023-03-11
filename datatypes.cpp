#include <iostream>
using namespace std;
int main()
{
    int a = 10; // declaration and initialisation
    cout << "size of a = " << sizeof(a) << endl;

    float b;
    cout << "size of b = " << sizeof(b) << endl;
    char c;
    cout << "size of c = " << sizeof(c) << endl;
    bool d;
    cout << "size of d = " << sizeof(d) << endl;
    short int si;
    long int li;
    cout << "size of shortint = " << sizeof(si) << endl;
    cout << "size of longint = " << sizeof(li);

    return 0;
}