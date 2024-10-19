//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LL
{
private:
    Node *head;
public:
    LL(){head=NULL;}
    LL(int A[], int n);
    ~LL();
    void display();
    void Insert(int pos, int x);
    int remov(int pos);
    int len();
};

LL :: LL(int A[], int n)
{
    Node *tmp=NULL,*last=NULL;

    head = new Node;

    head->data =  A[0];
    head->next = NULL;

    last = head;



    for(int i=1; i<n; i++)
    {
        tmp = new Node;

        tmp->data = A[i];
        tmp->next = NULL;

        last->next = tmp;
        last = tmp;

    }
}

LL :: ~LL()
{
    Node *t = NULL;
    t = head;
    while(head!=NULL)
    {
        t = head;
        head = head->next;
        delete t;
    }
}

void LL :: display()
{
    Node *p = new Node;
    p = head;
    cout<<"Your LL: "<<endl;
    while(p)
    {
        cout<< (p->data) <<" ";
        p = p->next;
    }
    cout<<endl;
}

void LL :: Insert(int pos, int x)
{
    Node *t=new Node,*nod = new Node;
    nod->data = x;
    nod->next = NULL;

    if(pos==1)
    {
        nod->next = head;
        head = nod;
    }
    else{
        t = head;
        for(int i=1; i<=pos-2; i++)
        {
            t = t->next;
        }
        nod->next = t->next;
        t->next = nod;
    }
}

int LL :: len()
{
    int l=0;
    Node *t;
    t = head;
    while(t!=NULL)
    {
        l++;
        t = t->next;

    }
    return l;
}


int LL :: remov(int pos)
{
    int x;
    Node *p = new Node,*q = new Node;

    if(pos==1)
    {
        p = head;
        x = head->data;

        head = head->next;
        delete p;
        return x;
    }
    else
    {
        q = head;
        for(int i=1; i<=pos-2; i++)
        {
            q = q->next;
        }
        p = q->next;
        x = p->data;
        q->next = q->next->next;
        delete p;

        return x;
    }
}


int main()
{
    int n = 5;
    int arr[5] = {1,2,3,4,5};


    LL linkedlist(arr,n);

    cout<<"My Link List Size is : "<<linkedlist.len()<<endl;
    linkedlist.Insert(2,69);

    linkedlist.display();
    cout<<"DELETED: "<<linkedlist.remov(4)<<endl;
    linkedlist.display();

    return 0;
}
