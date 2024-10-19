#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Created by Tanvir Ahmed Rafi (Alraaafi)
class diagonal
{
private:
    int n;
    int *A;

public:
    diagonal()
    {
        n = 3;
        A = new int[n];
    }

    diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }

    ~diagonal()
    {
        delete []A;
    }

    void Set(int, int, int);
    int Get(int,int);
    void display();

};

void diagonal :: Set( int i, int j, int x)
{
    if(i==j) A[i-1] = x;
}

int diagonal :: Get(int i, int j)
{
    if(i==j) return A[i-1];
    else return 0;
}

void diagonal :: display ()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j) cout<<A[i]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    diagonal mat(4);

    mat.Set(1,1,7);
    mat.Set(2,2,5);
    mat.Set(3,3,3);
    mat.Set(4,4,8);

    mat.Set(3,1, 0);

    cout<<"MATRIX Get Value: "<<mat.Get(2,2)<<endl;

    mat.display();
}

