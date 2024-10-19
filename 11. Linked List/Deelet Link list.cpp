
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

int delet(struct Node *p, int pos)
{
    int in;
    struct Node *tmp=NULL;
    tmp = new struct Node;
    if(pos==1)
    {
        in = first->data;
        tmp = first->next;
        delete first;

        first = tmp;
        return in;
    }
    else
    {
        for(int i=0; i<pos-1; i++)
        {
            tmp = p;
            p = p->next;
        }
        in = p->data;

        tmp->next = p->next;
        delete p;
        return in;

    }
}

int main()
{
    int arr[] = {2,6,8,3,9};
    int n = 5;

    LinkCreateByArray( arr , n );

    cout<<"Delete Element is: "<<delet(first, 3)<<endl;

    display(first);


    return 0;
}

