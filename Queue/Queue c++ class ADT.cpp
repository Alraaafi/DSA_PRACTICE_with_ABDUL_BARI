
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
using namespace std;

class Queue
{
public:
    int size;
    int front;
    int rear;
    int *Q;
Queue()
{
    size = 10;
    front = rear = -1;
    Q = new int[size];
}

Queue(int n)
{
    size = n;
    front = rear = -1;
    Q = new int[size];
}

void enQ(int val) ;
int deQ();

void display()
{
    for(int i = front +1; i<= rear; i++)
    {
        cout<<Q[i]<< " ";
    }
    cout<<endl;
}

};
void Queue :: enQ(int val)
{
    if(rear == size-1)
    {
        cout<<"Queue is Overflow"<<endl;
        return ;
    }

    rear++;
    Q[rear] = val;
}


int Queue :: deQ()
{
    if(rear == front)
    {
        cout<<"Queue is Underflow "<<endl;
        return -1;
    }

    front++ ;

    int x = Q[front];
    return x;


}


int main()
{
    Queue que(5);

    que.deQ();

    que.enQ(10);
    que.enQ(20);
    que.enQ(30);

    cout<<que.deQ()<<endl;

    que.enQ(40);
    que.enQ(77);
    que.enQ(99); //oberflow

    que.display();
}

