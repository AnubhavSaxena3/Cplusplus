#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "aNuBhAv SaXeNa";
    // convert to upper case
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] -= 32;
    //     }
    // }
    // cout << str << endl;
    // // for lowercase
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] += 32;
    //     }
    // }
    // cout << str << endl;
    // return 0;

                                     //by using function
 
    //for uppercase
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    //for lowercase
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
}