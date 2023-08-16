#include<iostream>
using namespace std;

int main(){
    string s={"i am kamrul."};
    string s1={" im a student"};
    //string concatenation
    string s2=s+s1;
    cout<<s2<<endl;
    cout<<s[0]<<endl;
    s[1]=s[1]+1;
    cout<<s[1]<<endl;
}