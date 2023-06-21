#include<iostream>
#define qSize 5
using namespace std;

typedef struct 
{
    int data [qSize+1];
    int head, tail;
} Queue;

void enqueue(Queue *q, int item){
    if((q->tail + 1) % (qSize + 1) == q->head){
        cout<<"queue is full "<<endl;
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (qSize + 1);
}

int dequeue(Queue *q){
    int item;
    if(q->tail == q->head){
        cout<<"queue is empty: "<<endl;
        return -1;
    }
    item = q->data[q->head];
    q->head = (q->head + 1) % (qSize + 1);
    
    return item;
}

int main(){
    Queue q;
    int item;

    q.head = 0;
    q.tail = 0;

    enqueue(&q, 1);
    cout<<"tail: "<<q.tail<<endl;
    enqueue(&q, 453454);
    cout<<"tail: "<<q.tail<<endl;
    enqueue(&q, 3);
    cout<<"tail: "<<q.tail<<endl;
    enqueue(&q, 5656);
    cout<<"tail: "<<q.tail<<endl;
    enqueue(&q, 5);
    cout<<"tail: "<<q.tail<<endl;
    enqueue(&q, 6);
    cout<<"tail: "<<q.tail<<endl;
    
    
}