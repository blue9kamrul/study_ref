#include<iostream>
#define MAX 10

using namespace std;

typedef struct 
{
    int top;
    int data[MAX];
}Stack;

void push(Stack *s, int item){
    if(s->top<MAX){
        s->data[s->top]=item;
        s->top++;
    }
    else{
        cout<<"stack is full"<<endl;
    }
}

int pop(Stack *s){
    int item;
    if(s->top==0){
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else{
        s->top=s->top-1;
        item=s->data[s->top];
    }
    return item;
}

int main(){
    Stack s;
    int item;

    s.top=0;
    push(&s,1);
    push(&s,2);
    push(&s,3);
    item=pop(&s);
    cout<<item<<" ";
    item=pop(&s);
    cout<<item<<" ";
    item=pop(&s);
    cout<<item<<" ";
}