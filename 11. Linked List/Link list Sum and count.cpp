
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

int linkCount(struct Node *p)
{
    int cnt = 0;

    while(p!=0)
    {
        cnt++;
        p = p->next;
    }
    return cnt;
}

int linkRCount(struct Node *p)
{

    if(p!=0)
    {
        return linkRCount(p->next)+1;
    }
    else
    {
        return 0;
    }
}

int linkSum(struct Node *p)
{

   int s = 0;

   while(p)
   {
       s=s + (p->data);
       p = p->next;
   }
   return s;

}

int linkRSum(struct Node *p)
{

    if(p!=NULL)
    {
        return linkRSum(p->next) + (p->data) ;
    }
    else
    {
        return 0;
    }
}



int main()
{
    int arr[] = {2,6,8,3,9};
    int n = 5;

    LinkCreateByArray( arr , n );

    cout<<"Link List Count: "<<linkCount(first)<<endl;
    cout<<"Link List RCount: "<<linkRCount(first)<<endl;

    cout<<"Link List sum: "<<linkSum(first)<<endl;
    cout<<"Link List Rsum: "<<linkRSum(first)<<endl;

    return 0;
}

