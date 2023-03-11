// #include <iostream>
// using namespace std;
// int main()
// {

//     char button;
//     cout << "enter the  character: ";
//     cin >> button;
//     if (button == 'a')
//     {
//         cout << "hello" << endl;
//     }
//     else if (button == 'b')
//     {
//         cout << "yellow world" << endl;
//     }
//     else if (button == 'c')
//     {
//         cout << "blue world"<<endl;
//     }
//     else
//     {
//         cout << "dark world" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
// int n1,n2;
// char op;
// cout<<"Enter 2 numbers: ";
// cin>>n1>>n2;
// cout<<"Enter operand: ";
// cin>>op;
// switch (op)
// {
// case '+':
// cout<<n1+n2<<endl;
// break;
// case '-':
// cout<<n1-n2<<endl;
// break;
// case '*':
// cout<<n1*n2<<endl;
// break;
// case '/':
// cout<<n1/n2<<endl;
// break;
// case '%':
// cout<<n1%n2<<endl;
// break;
// default:
// cout<<"Operator not found!"<<endl;
// break;
// }

// return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter an alphabet: ";
    cin >> c;
    switch (c)
    {
    case 'a':
        cout << "It is a vowel" << endl;
        break;
    case 'e':
        cout << "It is a vowel" << endl;
        break;
    case 'i':
        cout << "It is a vowel" << endl;
        break;
    case 'o':
        cout << "It is a vowel" << endl;
        break;
    case 'u':
        cout << "It is a vowel" << endl;
        break;
    default:
        cout << "It is a consonant" << endl;
        break;
    }
    return 0;
}