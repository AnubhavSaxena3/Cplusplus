#include<iostream>
using namespace std;
// int main(){
//     int array[4]={3,4,23,5};
//     array[4]=33;
//     cout<<array[4]<<endl;
//     return 0;
// } array basic syntax+program

//if we take input from user then
int main(){
    int n;
    cin>>n;
    int array[n]={23,45,23,554,32};
    for(int i=0; i<n;i++){
        cout<<array[i]<<" ";

    }
    return 0;
}