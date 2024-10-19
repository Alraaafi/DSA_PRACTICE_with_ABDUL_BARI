
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
    if( p!=NULL )
    {
        cout<< (p->data) <<" ";
        display(p->next);
    }

}

void displayRev(struct Node *p)
{
    if( p!=NULL )
    {
        displayRev(p->next);
        cout<< (p->data) <<" ";
    }

}


int main()
{
    int arr[] = {2,6,8,3,9};
    int n = 5;

    LinkCreateByArray( arr , n );

    display( first );

    cout<<endl<<"REVERSE: "<<endl;

    displayRev(first);

    return 0;
}

