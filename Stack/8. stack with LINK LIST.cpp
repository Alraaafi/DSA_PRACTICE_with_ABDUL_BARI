
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *top=NULL;

bool isEmpty()
{
    return top==NULL;
}

bool isFull()
{
    Node *t = NULL;
    t = new Node;
    if(t==NULL) return true;
    else return false;
}

void push(int x)
{
    if(isFull())
    {
        cout<<"OVERFLOW!"<<endl;
        return;
    }

    Node *t = new Node;
    t->data = x;

    t->next = top;
    top = t;

}

int pop()
{
    if(isEmpty())
    {
        cout<<"ENDERFLOW"<<endl;
        return -1;
    }
    else
    {
        Node *t = top;
        top = top->next;
        int x = t->data;
        delete t;
        return x;
    }
}

void display()
{
    Node *t = top;

    while(t)
    {
        cout<<t->data <<" ";
        t = t->next;
    }
    cout<<endl;

}

int main()
{
    //cout<<pop()<<endl;

    push(10);
    push(20);
    push(30);

    display();

    cout<<pop()<<endl;
}

