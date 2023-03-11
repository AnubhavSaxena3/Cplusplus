// printing loop of 100 and skip the no. which is divisible by 3.
//  #include<iostream>
//  using namespace std;
//  int main(){
//      for(int i=1; i<100; i++){
//          if(i%3==0){
//              continue;

//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

// program to check a no is prime or not prime
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cin>>n;
//      int i;
//      for(i=2; i<n; i++){
//          if(n%i==0){
//              cout<<"non prime"<<endl;
//              break;
//          }
//  }
//  if(i==n){//for knowing that loop came outside through break statement
//      cout<<"prime"<<endl;
//  }
//  return 0;
//  }

//program to print prime number between two no.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }
    return 0;
}