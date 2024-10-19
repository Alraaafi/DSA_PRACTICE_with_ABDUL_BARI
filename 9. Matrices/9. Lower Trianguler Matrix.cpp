#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Created by Tanvir Ahmed Rafi (Alraaafi)
class LowTri
{
private:
    int n;
    int *A;

public:
    LowTri()
    {
        n = 3;
        A = new int[n*(n+1)/2];
    }

    LowTri(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    ~LowTri()
    {
        delete []A;
    }

    void Set(int, int, int);
    int Get(int,int);
    void display();

};

void LowTri :: Set( int i, int j, int x)
{
    if(i>=j) A[ (i*(i-1)/2) + (j-1) ] = x;
}

int LowTri :: Get(int i, int j)
{
    if(i>=j) return A[ (i*(i-1)/2) + (j-1)];
    else return 0;
}

void LowTri :: display ()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i>=j) cout<<A[ (i*(i-1)/2) + (j-1)]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    int sz;
    cout<<"Enter Matrix Size: ";
    cin>>sz;
    LowTri mat(sz);

    for(int i=1; i<=sz; i++)
    {
        for(int j=1; j<=sz; j++)
        {
            int x;
            cin>>x;

            mat.Set(i,j,x);
        }
    }

    cout<<endl<<"MATRIX Get Value: "<<mat.Get(2,1)<<endl;

    mat.display();
}

