#include<iostream>
using namespace std;
int main(){
    int pcmoney=3000;
    for (int date = 1; date <=30; date++)
    {
        if (date%2==0){
            continue;
        };
        if(pcmoney==0){
            break ;
        }
        cout<<"go out today"<<endl;
        pcmoney=pcmoney-300;

    }
    return 0;
}