
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *Front=NULL, *Rear = NULL;

void enQ(int x)
{
    Node *t = new Node;
    if(t==NULL) cout<<"QUEUE IS Stack-Over-Flow or FULL"<<endl;
    else
    {
        t->data = x;
        t->next = NULL;

        if(Front==NULL) Front = Rear = t;
        else
        {
            Rear->next = t;
            Rear = t;
        }
    }
}

int deQ()
{
    Node *t = NULL;

    if(Front==NULL)
    {
        cout<<"QUEUE IS EMPTY!"<<endl;
        return -1;
    }
    else
    {
        int x;
        t = Front;
        Front = Front->next;
        x = t->data;
        delete t;
        return x;
    }
}

void display()
{
    Node *p;
    p = Front;

    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;

    }
    cout<<endl;
}

int main()
{
    deQ();
    enQ(10);
    enQ(20);
    enQ(30);
    enQ(40);
    enQ(50);

    display();

    cout<<"DATA: "<<deQ()<<endl;
    cout<<"DATA: "<<deQ()<<endl;

    display();
}
