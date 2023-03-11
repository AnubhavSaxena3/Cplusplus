#include <iostream>
using namespace std;
// basic working program and dereferencing mix

// int main()
// {
//     int a=10;
//     int *ptr;
//     ptr=&a;
//     cout<<&a<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
// }

// int main(){
//     int a=10;
//     int *ptr=&a;
//     cout<<*ptr<<endl;
//     *ptr=20;
//     cout<<a<<endl;
//     cout<<*ptr<<endl;
// }

// pointers arithmatic

// int main(){
//     int a=10;
//     int *ptr=&a;
//     cout<<ptr<<endl;
//     ptr++;//increment 4 byte of address
//     cout<<ptr<<endl;
// }

// int main(){
//     char ch='a';
//     char*ptr=&ch;
//     cout<<ptr<<endl;
//     ptr++;//increment 1 byte as it is character
//     cout<<ptr<<endl;
// }

// Pointer & Array
// int main()
// {
//     int arr[] = {20,10, 30};
//     cout << *arr << endl;
//     int *ptr = arr;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     cout << *ptr << endl;
//     //     ptr++;
//     // }
// OR
//     for(int i=0;i<3;i++){
//         cout<<*(arr+i)<<endl;
//     }//arr++ is not applicable
// }

// Pointer to pointer
// int main()
// {
//     int a = 10;
//     int *p;
//     p = &a;
//     cout << *p << endl;
//     int **q = &p;
//     cout << *q << endl;
//     cout << **q << endl;
//     return 0;
// }

// Passing pointer to function
// void increment(int b){
//     b++;
// }
// int main(){
//     int b=1;
//     increment(b);
//     cout<<b<<endl;
//     return 0;
// }

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 2;
    int b = 4;
    // int *aptr=&a;
    // int *bptr=&b;
    // swap(aptr,bptr);
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}