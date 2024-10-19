
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<iostream>
using namespace std;
int vis[103] ;
void DFS(int G[][7], int u, int n   )
{
    cout<<u<<" ";
    vis[u] = 1;

    for(int v=1; v<n; v++)
    {
        if( G[u][v]==1 && vis[v]==0 )
        {
            DFS(G, v, n);
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


                 DFS( G, 1, 7 );


    cout<<endl<<"SUCCSESS!"<<endl;
}

