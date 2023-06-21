#include<iostream>
#include<cstring>
using namespace std;

int isBalanced(char input[]){
    char stack[100],lastChar;
    int i,top,len;
    top=0;
    len=strlen(input);

    for ( i = 0; i < len; i++)
    {
        if(input[i]=='('){
            stack[top]='(';
            top++;
        }
        else if(input[i]==')'){
            if(top==0){
                return 0;
            }
            top--;
            lastChar=stack[top];
            if(lastChar!='('){
                return 0;
            }          
        }
    }
    if(top==0) return 1;
    else return 0;
}

int main(){
    char input[100];
    cin>>input;
    if(isBalanced(input)){
        cout<<input<<" is balanced "<<endl;
    }
    else{
        cout<<"not balanced"<<endl;
    }
}