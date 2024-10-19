
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next; //self referential pointer
} *first=NULL, *second=NULL, *third=NULL;

void LinkCreateByArray1(int *arr, int n )
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

void LinkCreateByArray2(int *arr, int n )
{
    struct Node *tmp = NULL,*last=NULL;

    second = new Node;
    second->data = arr[0];
    second->next = NULL;

    last = second;

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

void concat(struct Node *p, struct Node *q)
{
    third = p;
    while(p->next)
    {
        p = p->next;
    }
    p->next = second;
}

int main()
{
    int arr1[] = {2,6,17,22,42};
    int arr2[] = {7,3,8,11};
    int n1 = 5,n2=4;

    LinkCreateByArray1( arr1 , n1 );
    LinkCreateByArray2( arr2 , n2 );

    concat(first,second);

    display(third);

    return 0;
}

