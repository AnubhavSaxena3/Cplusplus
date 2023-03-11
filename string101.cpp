#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    // string str="anubhav";//it declares a string of a value
    // string str[10];//it declares a string of size [n]
    // string s(5, 'N'); // it declares a string of size 5 with all characters"n"
    // string str;
    // string abc(str);//it declares a copy of the string str;

    // cin>>str;//taking input
    // using getline()function:- to input the string with space we use getline() function instead of cin.
    // string s;
    // getline(cin,s);
    // cout << "anubhav saxena "<<s<< endl;

    // Different functions of string

    // 1. append()
    // string s1 = "fam", s2 = "ily";
    //  s1.append(s2);
    //  cout << s1 << endl;
    // // or
    // s1=s1+s2;
    // cout<<s1<<endl;

    // 2.assign()
    //  string s="nincumpoop";
    //  s.assign("Anubhav");
    //  cout<<s<<endl;
    //  // or
    //  //s="Saxena";
    //  //cout<<s<<endl;

    // 3.at()
    // string s="anubhav";
    // cout<<s.at(3)<<endl;
    // // or
    // cout<<s[3]<<endl;

    // 4.clear()
    // string s="nuncumpoop";
    // s.clear();
    // cout<<s<<endl;

    // 5.compare()
    // string s1="abc",s2="xyz";
    // cout<<s2.compare(s1)<<endl;

    // 6.empty()
    // string s="anubhav";
    // s.clear();
    // if(s.empty()){
    //     cout<<"given string is empty"<<endl;
    // }

    // 7. erase()
    // string s="anubhav";
    // s.erase(3,4);
    // cout<<s<<endl;

    // 8. find()
    // string s="anubhav";
    // cout<<s.find("bhav")<<endl;

    // 9.insert()
    // string s = "anubhav";
    // s.insert(7, "lalla");
    // cout << s << endl;

    // 10.length()
    // string s="anubhav";
    // cout<<s.length()<<endl;

    // 11.resize()
    // string s="anubhav";
    // s.resize(6);
    // cout<<s<<endl;

    //  12.size()
    // string s= "anubhav";
    // cout<<s.size()<<endl;

    // 13.substr()
    // string s="anubhav";
    // cout<<s.substr(2,4);

    // 14. string to integer
    // string s = "786";
    // int x = stoi(s);
    // cout << x + 2 << endl;

    //15.int to string
    //int x=786;
    //cout<<to_string(x)+"2"<<endl;

    //16. sorting a string -> #include<algorithm>
    string s="qwertyuiopasdfghjklzxcvbnm";
    sort(s.begin(),s.end());
    cout<<s<<endl;


}