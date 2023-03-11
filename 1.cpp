#include<iostream>
using namespace std;
int main(){
    int j=10;
    int i=(j++,j+100,999+j);
    cout<<i;
    return 0;
}