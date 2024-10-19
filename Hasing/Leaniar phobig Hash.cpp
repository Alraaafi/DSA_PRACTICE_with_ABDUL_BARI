
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;
int const sz =10;

int key( int H[], int v )
{
    int i = 0;

    while( H[ ( ( v%sz) + i )%sz ]!=0 && i<=sz  )
    {
        i++;
    }
    return ( ( v%sz) + i )%sz ;
}

void ins( int H[], int value )
{
    int nxt = key( H,value );
    H[nxt] = value;
}

int src(int A[], int x)
{
    int k = x%sz;
    int i = 0;

    while( i<=sz )
    {
        if(A[ (k + i )%sz ]==x)
            return i;
        i++;
    }
    return -1;
}

void dis( int A[] )
{
    cout<<endl<<"INDEX---------------------VALUE"<<endl;

    for(int i=0; i<sz; i++)
    {
        cout<<i<<"-------------------------"<<A[i]<<endl;
    }
    cout<<endl;
}
int main()
{
    int HT[10] = {0};

    ins(HT,15);
    ins(HT,16);
    ins(HT,24);
    ins(HT,55);
    ins(HT,25);
    ins(HT,34);

    dis(HT);

    int f = src(HT,34);
    if(f==-1)
        cout<<"NOT FOUND!"<<endl;
    else
        cout<<"Found : "<<f<<endl;



}

