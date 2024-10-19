
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next; //self referential pointer
} *first=NULL;

void LinkCreateByArray(int *arr, int n )
{
    struct Node *tmp = NULL,*last=NULL;

    first = new Node;
    first->data = arr[0];
    first->next = NULL;

    last = first;

    for(int i=1; i<n; i++)
    {
        tmp = new Node;
        tmp->data = arr[i];
        tmp -> next = NULL;

        last->next = tmp;
        last = tmp;


    }
}

void display(struct Node *p)
{
    while( p!=NULL )
    {
        cout<< (p->data) <<" ";
        p = p->next;
    }
    cout<<endl;
}

void sortIn(struct Node *p, int val)
{
    struct Node *tmp;
    struct Node *q;
    tmp = new  Node;

    tmp->data = val;
    tmp->next = NULL;

    if(first==NULL)
    {
        first = tmp;
    }
    else
    {
        while(p!=NULL && p->data <= val)
        {
            q = p;
            p = p->next;
        }
        if(p==first)
        {
            tmp->next = first;
            first = tmp;
        }
        else
        {
            tmp->next = q->next;
            q->next = tmp;
        }
    }
}

int main()
{
    //int arr[] = {2,6,8,3,9};
    int arr[] = {2,6,18,33,49};
    int n = 5;

    LinkCreateByArray( arr , n );

    sortIn(first,20);
    //sortIn(first,12);
    //sortIn(first,28);
    //sortIn(first,3);

    display(first);

    return 0;
}

