
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

void insrt(int *arr, int in, int val, int sz)
{
    for(int i=sz; i>in; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[in] = val;
}

int part( int *A, int l, int r )
{
    int i,j;
    i = l;
    j = r;
    int pvt = A[l];

    do
    {
        do{ i++; } while( pvt >= A[i] ) ;
        do{ j--; } while( pvt < A[j] );

        if(i<j)
            swap(A[i], A[j]);
    } while(i<j) ;

    swap(A[j], A[l]);

    return j;
}

void QUICK( int *A, int l, int r )
{
    int p;

    if(l<r)
    {
        p = part(A,l,r);

        QUICK( A, l, p );
        QUICK(A, p+1, r);
    }
}


int main()
{
    int arr[] = { 8, 3, 9, 4, 1, 2, 7, 6, 5, 0, INT32_MAX };
    int i,n = 10;

    QUICK(arr, 0, n);


    cout<<"AFTER SORTING :"<<endl;

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



}

