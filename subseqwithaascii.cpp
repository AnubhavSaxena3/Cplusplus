#include<iostream>
using namespace std;
void subsequences(string s,string ans=""){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros= s.substr(1);
    subsequences(ros,ans);
    subsequences(ros,ans+ch);
    subsequences(ros,ans+to_string(code));
}
int main(){
    subsequences("AB","");
    cout<<endl;

}