#include<bits/stdc++.h>
using namespace std;

//Md. Tanvir Ahmed Rafi (Alraaafi)

struct Node
{
    Node *lc;
    int data;
    Node *rc;
} *root = NULL;

void ins( int x )
{
    Node *t,*p;
    //t = new Node;
    p = new Node;
    p->data = x;
    p->lc = p->rc = NULL;

    if(root==NULL)
    {
        root = p;
        return;
    }
    else
    {
        t = root;

        while(t)
        {
            if( ( t->data > x ) && !(t->lc) )
            break;

            if( ( t->data < x ) && !(t->rc) )
            break;


            if( t->data > x )
            {
                t = t->lc ;
            }
            else if(t->data < x)
            {
                t = t->rc;
            }
            else
                return;
        }
        cout<<"TEST"<<endl;

        if(t->data > x)
            t->lc = p;
        else
            t->rc = p;
        return;
    }
}

void inO(Node *p)
{
    if( !(p) )
        return;

    inO( p->lc );
    cout<<p->data<<" ";
    inO(p->rc);
}


using namespace std;

int main ()
{
    ins(20);
    ins(10);
    ins(30);
    ins(15);
    ins(5);

    cout<<"The Tree Values: "; inO(root); cout<<endl;
}
