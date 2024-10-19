
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
using namespace std;



struct Stack
{
    int size;
    int top;
    int *stk;
};




void createStack(struct Stack *s)
{
    cout<<"Enter Size: ";
    cin>> s->size ;

    s->top = -1;

    s->stk = new int[s->size];
}



bool isEmpty( struct Stack *s )
{
    if(s->top == -1)
        return 1;
    else
        return 0;
}




bool isFull(struct Stack *s)
{
    return s->top == s->size-1;
}




void push(struct Stack *s, int val)
{
    if(isFull(s))
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }

    s->top++;
    s->stk[s->top] = val;

}





int pop( struct Stack *s)
{
    if(isEmpty(s))
    {
        cout<<"Stack Underflow! "<<endl;
        return -1;
    }

    int x;
    x = s->stk[s->top];
    s->top--;

    return x;
}


void display(struct Stack *s)
{
    for(int i = s->top; i>=0; i--)
    {
        cout<<s->stk[i]<<" ";
    } cout<<endl;
}

int stackTop(struct Stack *s)
{
    if(isEmpty(s) )
    {
        cout<<"enderFlow!!"<<endl;

        //cout<<"SZ : "<<s->top<<endl;
        return -1;
    }
    else
        return s->stk[s->top];


    //return
}
int main()
{
    struct Stack st;

    createStack(&st);

    pop(&st);

    push(&st,5);
    push(&st,7);
    push(&st,2);
    push(&st,8);

    display(&st);

    cout<<stackTop(&st)<<endl;
    cout<<pop(&st)<<endl;

}

