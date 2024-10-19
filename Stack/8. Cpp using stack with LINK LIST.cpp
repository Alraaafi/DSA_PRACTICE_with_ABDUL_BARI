
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
using namespace std;

struct Node
{
public:
    int data;
    struct Node *next;
};

class Stack
{
private:
    Node *top;

public:

    Stack(){ top = NULL; }
    bool isEmpty();
    bool isFull();
    void push(int);
    int pop();
    void display();

};

bool Stack :: isEmpty()
{
    return top==NULL;
}

bool Stack :: isFull()
{
    Node *t = NULL;
    t = new Node;
    if(t==NULL) return true;
    else return false;
}

void Stack :: push(int x)
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

int Stack :: pop()
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

void Stack :: display()
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

    Stack stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);

    stk.display();

    cout<<stk.pop()<<endl;
}

