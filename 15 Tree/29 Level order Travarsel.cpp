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

void LevelO( struct Node *r)
{
    int d = r->data ;

    cout<<r->data<<" ";

    struct QUEUE qq;

    createQ(&qq,100);//void createQ(QUEUE *q, int s)
    enQ(&qq, r);

    struct Node *t = NULL;


    while( !( isEmpty(qq)) )
    {
        t = deQ(&qq );

        if( t->lc )
        {
            enQ(&qq,t->lc);
            cout<<t->lc->data<<" ";
        }
        if( t->rc )
        {
            enQ(&qq,t->rc);
            cout<<t->rc->data<<" ";
        }
    }

}


int main ()
{
    create();
    cout<<"Level-Order Tree Traversal : "; LevelO(root); cout<<endl;

}
