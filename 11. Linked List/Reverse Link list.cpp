
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

void reversSlidePointLL(struct Node *p )
{
    struct Node *q=NULL,*r=NULL;

    while(p)
    {
        r = q;
        q = p;
        p = p->next;

        q->next = r;
    }
    first = q;
}

 void reversRecLL(struct Node *q, struct Node *p)
 {
     if(p)
     {
         reversRecLL(p,p->next);
         p->next = q;
     }
     else
        first = q;

 }

int main()
{
    int arr[] = {2,6,8,3,9};
    int n = 5;

    LinkCreateByArray( arr , n );

    reversSlidePointLL(first);

    display(first);

    reversRecLL(NULL, first);

    display(first);

    return 0;
}

