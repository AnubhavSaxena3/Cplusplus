#include <iostream>
using namespace std;
// Print the number in decreasing order from n to 1.
void dec(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    cout << n << endl;
    dec(n - 1);
}
// Print the number in increasing order from 1 to n.
void inc(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    inc(n - 1);
    cout << n << endl;
}
int main()
{

    dec(5);
    inc(6);
    return 0;
}