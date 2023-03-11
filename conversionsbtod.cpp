#include <bits/stdc++.h>
using namespace std;
int binarytodecimal(int n)
{
    int ans = 0;
    int x = 1;//2**0__2**1__2**2---
    while (n > 0)
    {
        int y = n % 10;//for selecting last digit of binary no
        ans += x * y;  //0+2**0*1 or 0+2**0*0 and so on 
        x *= 2;// after that it will updated to next like 2**1 it means by doing x*2 
        n /= 10;//for going to next digit of binary no.
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << binarytodecimal(n) << endl;
}