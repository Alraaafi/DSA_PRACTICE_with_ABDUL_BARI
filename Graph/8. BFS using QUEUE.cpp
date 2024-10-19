
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
#include "QQ.h"
using namespace std;
int vis[103] ;
void BFS(int G[][7], int i, int n   )
{
    int v,u;
    vis[i] = 1;
    cout<<i<<" ";
    createQ(q, n+3);
    enQ(q,i);

    while( !emp() )
    {
        u = deQ(q);

        for(v=1; v<n; v++)
        {
            if(G[u][v]==1 && vis[v]==0)
            {
                cout<<v<<" ";
                vis[v] = 1;
                enQ(q,v);
            }
        }
    }
}


int main()
{
    int G[7][7]={{0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}};


                 BFS( G, 1, 7 );


    cout<<endl<<"SUCCSESS!"<<endl;
}

