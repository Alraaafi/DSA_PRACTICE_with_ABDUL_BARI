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

void display(Node *hd)
{
    while(hd)
    {
        cout<< (hd->data) <<" ";
        hd = hd->next;
    }
    cout<<endl;
}

int main()
{

    int sz = 5;
    int A[sz] = {10,20,30,40,50};

    DoublyLLCreateByArray(A, sz);

    cout<<"Size Of LL is: " <<len(first)<<endl;

    display(first);

    cout<<"HEAD IS: " <<first->data <<endl;

    return 0;
}
