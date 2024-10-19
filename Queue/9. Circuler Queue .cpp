
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
using namespace std;

struct QUEUE
{
    int sz;
    int Front;
    int rear;
    int *que;
} q;

void createQ(QUEUE &q, int s)
{
    q.Front = q.rear = 0;
    q.sz = s;

    q.que = new int[ q.sz ] ;
}

void enQ(QUEUE &q, int val)
{
    if( (q.rear + 1)%q.sz == q.Front )
        cout<<"QUEUE IS FULL"<<endl;
    else{
        q.rear = (q.rear + 1) % q.sz ;

        q.que[ q.rear ] = val;
    }
}

int deQ(QUEUE &q)
{
    if( q.Front == q.rear )
    {
        cout<<"QUEUE IS EMPTY"<<endl;
        return -1;
    }
    else
    {
        q.Front = (q.Front+1)%q.sz;

        return q.que[ q.Front ];
    }

}

int frnt(QUEUE &q)
{
    if( q.Front == q.rear )
    {
        cout<<"QUEUE IS EMPTY"<<endl;
        return -1;
    }
    else
    {
        //q->Front = (q->Front+1)%q->sz;

        return q.que[ (q.Front+1)%q.sz ];
    }

}

void dis(QUEUE &q)
{
    int i = q.Front + 1;

    for( ; i!=(q.rear+1); i++ )
    {
        cout<<q.que[i]<< " ";
    }
    cout<<endl;
}


int main()
{
    int n;
    n = 10;
    QUEUE q;

    createQ(q,n);

    enQ(q,10);
    enQ(q,20);
    enQ(q,30);
    cout<<"FRONT: "<<frnt( q )<<endl;
    //enQ(q,40);

    dis( q );

    deQ(q);
    deQ(q);


    dis( q );
}
