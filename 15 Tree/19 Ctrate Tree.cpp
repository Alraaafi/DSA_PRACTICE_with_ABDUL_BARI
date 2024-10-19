#include<bits/stdc++.h>
using namespace std;

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

int main ()
{
    create();
    cout<<"PRE-Order Tree Traversal : "; preO(root); cout<<endl;
    cout<<"IN-Order Tree Traversal : "; inO(root); cout<<endl;
    cout<<"POST-Order Tree Traversal : "; postO(root); cout<<endl;

}
