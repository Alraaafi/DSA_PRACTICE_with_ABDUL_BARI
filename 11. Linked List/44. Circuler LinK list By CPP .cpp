#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class CLL
{
private:
    Node *head;
public:
    CLL(){head=NULL;}
    CLL(int A[], int n);
    ~CLL();
    void display();
    void Insert(int pos, int x);
    int remov(int pos);
    int len();
};

CLL :: CLL(int A[], int n)
{
    Node *tmp=NULL,*last= new Node;

    head = new Node;

    head->data =  A[0];
    head->next = head;

    last = head;



    for(int i=1; i<n; i++)
    {
        tmp = new Node;

        tmp->data = A[i];
        tmp->next = last->next;

        last->next = tmp;
        last = tmp;
    }
}

CLL :: ~CLL()
{
    Node *t = new Node, *q = new Node;
    t = head;
    q = head;

    do
    {
        t = q;
        q = q->next;
        delete t;
    }
    while(q!=head);
}

void CLL :: display()
{
    Node *p = new Node;
    p = head;
    cout<<"Your LL: "<<endl;
    do
    {
        cout<<(p->data)<<" ";
        p = p->next;
    }
    while(p!=head);
    cout<<endl;
}

void CLL :: Insert(int pos, int x)
{
    Node *t=new Node,*nod = new Node;
    nod->data = x;
    //nod->next = NULL;

    if(pos==1)
    {

        if(head->next == head)
        {
            nod->next = head;
            head->next = nod;
            head = nod;
        }
        else
        {
            nod->next = head;
            Node *p = new Node;
            p = head;

            while(p->next!=head)
            {
                p = p->next;
            }

            p->next = nod;
            head = nod;
        }
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

int CLL :: len()
{
    int l=0;
    Node *t;
    t = head;

    do
    {
        l++;
        t = t->next;
    }
    while(t!=head);

    return l;
}


int CLL :: remov(int pos)
{
    int x;
    Node *p = new Node,*q = new Node;

    if(pos==1)
    {
        if(head->next==head)
        {
            x = head->data;
            head = NULL;
            return x;

        }
        else{
            p = head;
            q = head;
            x = head->data;

            while(p->next!= head)
            {
                p = p->next;
            }

            p->next = head->next;
            delete q;

            return x;
        }
    }
    else
    {
        q  = head;
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


    CLL linkedlist(arr,n);

    cout<<"My Link List Size is : "<<linkedlist.len()<<endl;
    linkedlist.Insert(2,69);

    linkedlist.display();
    cout<<"DELETED: "<<linkedlist.remov(4)<<endl;
    linkedlist.display();

    return 0;
}
