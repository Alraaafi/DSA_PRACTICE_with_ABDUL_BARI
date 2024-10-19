#include<bits/stdc++.h>
using namespace std;


// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi


//Tree Node.......
struct Node
{
    Node *lc;
    int data;
    Node *rc;
} *root=NULL;


// QUeue part:
struct QUEUE
{
    int sz;
    int Front;
    int rear;
    Node **que;
};

void createQ(QUEUE *q, int s)
{
    q->Front = q->rear = 0;
    q->sz = s;

    //(q->que) = new *Node[ q.sz ] ;

    q->que = (Node **) malloc(q->sz * sizeof(Node *) );
    //cout<<"YES.."<<endl;
}

void enQ(QUEUE *q, Node *val)
{
    if( (q->rear + 1)%q->sz == q->Front )
        cout<<"QUEUE IS FULL"<<endl;
    else{
        q->rear = (q->rear + 1) % q->sz ;

        q->que[ q->rear ] = val;
    }
}

Node* deQ(QUEUE *q)
{
    if( q->Front == q->rear )
    {
        cout<<"QUEUE IS EMPTY"<<endl;
        return NULL;
    }
    else
    {
        q->Front = (q->Front+1)%q->sz;

        return q->que[ q->Front ];
    }

}

Node* frnt(QUEUE &q)
{
    if( q.Front == q.rear )
    {
        cout<<"QUEUE IS EMPTY"<<endl;
        return NULL;
    }
    else
    {
        //q->Front = (q->Front+1)%q->sz;

        return q.que[ (q.Front+1)%q.sz ];
    }

}

bool isEmpty(QUEUE &q)
{
    return q.Front == q.rear;
}



void create()
{
    int x;
    cout<<"ENTER ROOT: ";
    cin>>x;

    root = new Node;
    root->data = x;
    root->lc = root->rc = NULL;

    struct QUEUE q;

    createQ(&q, 100);
    //cout<<" cnt.. ";

    enQ(&q,root);

    Node *p,*t;



    while( !( isEmpty(q)) )
    {
        int l,r;
        p = deQ(&q);
        cout<<"ENTER LC of "<<p->data<<" : ";
        cin>>l;
        if(l!=-1)
        {
            t = NULL;
            t = new Node;
            t->data = l;
            t->lc = t->rc = NULL;
            p->lc  = t;
            enQ(&q,t);

        }


        cout<<"ENTER RC of "<<p->data<<" : ";
        cin>>r;
        if(r!=-1)
        {
            t = NULL;
            t = new Node;
            t->data = r;
            t->lc = t->rc = NULL;

            p->rc  = t;
            enQ(&q,t);

        }
    }

}




void preO(struct Node *p)
{
    if(p)
    {
    cout<<p->data<<" -> ";
    preO( p->lc );
    preO(p->rc);
    }
}

void inO(struct Node *p)
{
    if(p)
    {
    inO( p->lc );
    cout<<p->data<<" -> ";
    inO(p->rc);
    }
}

void postO(struct Node *p)
{
    if(p)
    {
    postO( p->lc );
    postO(p->rc);
    cout<<p->data<<" -> ";
    }
}

//the main Programe:-

struct Stack
{
    int size;
    int top;
    Node **stk;
};




void createStack(struct Stack *s, int sz)
{

    s->size = sz;

    s->top = -1;

    *s->stk = new Node[s->size];
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




void push(struct Stack *s, Node *val)
{
    if(isFull(s))
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }

    s->top++;
    s->stk[s->top] = val;

}





Node * pop( struct Stack *s)
{
    if(isEmpty(s))
    {
        cout<<"Stack Underflow! "<<endl;
        return NULL;
    }

    Node *x;
    x = s->stk[s->top];
    s->top--;

    return x;
}

void IpreO(Node *p)
{
    Stack S;
    createStack(&S, 100);

    //Node *t = NULL;

    //push(&S, p);

    while( p!=NULL || !isEmpty(&S) )
    {
        if(p)
        {
            cout<<p->data<<" -< ";
            push(&S , p);
            p = p->lc;
        }
        else
        {
            p = pop(&S);
            p = p->rc;
        }
    }
}


void IinO(Node *p)
{
    Stack S;
    createStack(&S, 100);

    //Node *t = NULL;

    //push(&S, p);

    while( p!=NULL || !isEmpty(&S) )
    {
        if(p)
        {
            push(&S , p);
            p = p->lc;
        }
        else
        {
            p = pop(&S);
            cout<<p->data<<" -< ";
            p = p->rc;
        }
    }
}


int main ()
{
    create();
    cout<<"PRE-Order Tree Traversal : "; preO(root); cout<<endl;
    cout<<"IN-Order Tree Traversal : "; inO(root); cout<<endl;
    cout<<"POST-Order Tree Traversal : "; postO(root); cout<<endl;

    //Iterative Process Of Traversal: -->>>

    cout<<"Itarative PRE-Order Tree Traversal : "; IpreO(root); cout<<endl;
    cout<<"Itarative IN-Order Tree Traversal : "; IinO(root); cout<<endl;

}
