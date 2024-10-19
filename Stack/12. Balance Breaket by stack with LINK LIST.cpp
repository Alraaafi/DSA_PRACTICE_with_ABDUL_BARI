
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
using namespace std;

struct Node
{
public:
    char data;
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
    void push(char);
    char pop();
    void display();
    int sSize();
    char  peek();

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

void Stack :: push(char x)
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

char Stack :: pop()
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
        char x = t->data;
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

int Stack :: sSize()
{
    int i=0;
    Node *t = top;

    while(t)
    {
        i++;
        t = t->next;
    }
    return i;
}

char Stack :: peek()
{
    if(isEmpty()) return ' ';
    else return top->data ;
}

char rever(char ch)
{
    if(ch=='(') return ')';
    if(ch=='{') return '}';
    if(ch=='[') return ']';
}

bool isValance(string s)
{
    int sz = s.size();
    int i;
    Stack stk;

    for(i=0; i<sz; i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            stk.push(s[i]);
        else if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(stk.isEmpty()) return 0;

            char topCh = stk.peek();
            topCh = rever(topCh);

            if(s[i]==topCh)
            {
                stk.pop();
            }
            else return 0;
        }
    }

    if(stk.isEmpty()) return 1;
    else return 0;
}

int main()
{
    //cout<<pop()<<endl;

    string str = "[ { (a+b) + c } + (a-c) + d ]" ; //[ { (a+b) + c } + (a-c) + d ]

    if(isValance(str)) cout<<"Valance Brakat!"<<endl;
    else cout<<"ImValance !!!! Breaket"<<endl;
}

