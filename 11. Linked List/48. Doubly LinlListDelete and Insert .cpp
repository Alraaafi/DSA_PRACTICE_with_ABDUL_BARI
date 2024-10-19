//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
} *first;

void DoublyLLCreateByArray(int A[], int n)
{
    first = new Node;
    Node *last = NULL, *tmp = NULL;

    first->prev = first->next = NULL;

    first->data = A[0];

    last = first;

    for(int i=1; i<n; i++)
    {
        tmp = new Node;

        tmp->data = A[i];

        tmp->next = NULL;

        tmp->prev = last;

        last->next = tmp;

        last = tmp;
    }
}

/*
int len(struct Node *hd)
{
    int l = 0;

    hd->data = 89;

    while(hd)
    {
        hd = hd->next;
        l++;
    }
    return l;
}
*/
void display(Node *hd)
{
    while(hd)
    {
        cout<< (hd->data) <<" ";
        hd = hd->next;
    }
    cout<<endl;
}

void addValue(int index, int x)
{
    Node *t = NULL;
    t = new Node;
    t->data = x;
    Node *q = new Node;
    q = first;

    if(index==1)
    {
        t->next = first;
        t->prev = NULL;

        first->prev = t;
        first = t;
    }
    else
    {
        for(int i=1; i<=index-2; i++)
            q = q->next;

        t->next = q->next;
        if(q->next) q->next->prev = t;

        t->prev = q;
        q->next = t;
    }
}
int remv(int index)
{
    Node *t = new Node;
    Node *p = new Node;
    p = first;
    int x;

    if(index==1)
    {
        x = first->data;
        t = first;
        first = first->next;
        if(first) first->prev = NULL;

        delete t;
        return x;
    }
    else{

        for(int i=1; i<=index-2; i++)
        {
            p = p->next;
        }

        t = p->next;
        x = t->data;


        if(p->next->next) p->next->next->prev = p;
        p->next = p->next->next;

        delete t;
        return x;
    }
}

void revr()
{
    Node *p = first, *t = new Node;

    while(p)
    {
        t = p->next;
        p->next = p->prev;

        p->prev = t;

        p = p->prev;

        if(p!=NULL && p->next==NULL) first = p;
    }
}

int main()
{

    int sz = 5;
    int A[sz] = {10,20,30,40,50};

    DoublyLLCreateByArray(A, sz);

    addValue(6,70);

    display(first);

    cout<<"Delete Element is : "<<remv(4)<<endl;

    display(first);

    cout<<"REVERSE Link List: " <<endl;
    revr();
    display(first);


    return 0;
}
