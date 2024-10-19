
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
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

void insrt(struct Node *p, int pos, int val)
{
    struct Node *tmp=NULL;
    tmp = new Node;

    tmp->data = val;
    tmp->next = NULL;

    if(pos==0)
    {
        tmp->next = first;
        first = tmp;
    }

    else{

        for(int i=0; i<pos-1; i++)
        {
            p = p->next;
        }

        tmp->next = p->next;
        p->next = tmp;

    }
}


int main()
{
    int arr[] = {2,6,8,3,9};
    int n = 5;

    LinkCreateByArray( arr , n );

    insrt(first,0,7); //head,pos,value

    insrt(first,3,13);

    display(first);

    return 0;
}

