#include<iostream>
//using namespace std;
//using namespace std;

struct QUEUE
{
    int sz;
    int Front;
    int rear;
    int *que;
} q;

int emp( )
{
    return q.Front == q.rear;
}

int full(  )
{
    return (q.rear + 1)%q.sz == q.Front;
}

void createQ(QUEUE &q, int s)
{
    q.Front = q.rear = 0;
    q.sz = s;

    q.que = new int[ q.sz ] ;
}

void enQ(QUEUE &q, int val)
{
    if( full() )
       return ;
    else{
        q.rear = (q.rear + 1) % q.sz ;

        q.que[ q.rear ] = val;
    }
}

int deQ(QUEUE &q)
{
    if( emp() )
    {
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

        return -1;
    }
    else
    {
        //q->Front = (q->Front+1)%q->sz;

        return q.que[ (q.Front+1)%q.sz ];
    }

}
