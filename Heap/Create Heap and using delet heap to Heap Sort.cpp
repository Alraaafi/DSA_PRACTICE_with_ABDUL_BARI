
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

void inst(int *A,int n )
{
    int i,j,tmp;
    tmp = A[n];
    i = n;

    while( i>1 && A[i/2] < tmp ) // > use mean Heap
    {
        A[i] = A[i/2];
        i = i/2;
    }

    A[i] = tmp;
}

int dlt( int *A, int n )
{
    int tmp = A[1];
    A[1] = A[n];

    A[n] = tmp;

    int i = 1;
    int j = i*2;

    while( j <= n-1 )
    {
        if( (j<n-1) && ( A[j] < A[j+1] ) ) // > use mean Heap
            j++;

        if( A[i] < A[j] ) // > use mean Heap
        {
            int t = A[i];
            A[i] = A[j];
            A[j] = t;

            i = j;
            j = j*2;
        }
        else
            break;

    }


    return tmp;
}


int main()
{
    int n = 10 ;
    int i,j;
    int heap[n+1] = {0,10, 30, 80, 15, 5, 25, 60, 35, 50, 20};


    cout<<"Normal Array: ";
    for(i=1; i<=n; i++) cout<<heap[i]<<" "; cout<<endl;


    for(i=2; i<=n; i++)
    {
        inst( heap, i );
    }

    cout<<"Heap Array: ";
    for(i=1; i<=n; i++) cout<<heap[i]<<" "; cout<<endl;


    for(i=n; i>1; i--)
    {
        dlt(heap, i);
    }

    cout<<"Heap SORT: ";
    for(i=1; i<=n; i++) cout<<heap[i]<<" "; cout<<endl;




}

