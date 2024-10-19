
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void createQ(struct Queue *q, int n)
{
    q->size = n;

    q->front = q->rear = -1;

    q->Q = new int[n];
}

void enQ(struct Queue *q, int val)
{
    if(q->rear == q->size-1)
    {
        cout<<"Queue is Overflow"<<endl;
        return ;
    }

    q->rear++;
    q->Q[q->rear] = val;
}


int deQ(struct Queue *q)
{
    if(q->rear == q->front)
    {
        cout<<"Queue is Underflow "<<endl;
        return -1;
    }

    q->front++ ;

    int x = q->Q[q->front];
    return x;


}


void display(struct Queue *q)
{
    for(int i = q->front +1; i<= q->rear; i++)
    {
        cout<<q->Q[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    struct Queue que;
    createQ(&que,5);

    deQ(&que); //underflow

    enQ(&que,10);
    enQ(&que,20);
    enQ(&que,30);

    cout<<deQ(&que)<<endl;

    enQ(&que,40);
    enQ(&que,77);
    enQ(&que,99); //oberflow

    display(&que);
}

