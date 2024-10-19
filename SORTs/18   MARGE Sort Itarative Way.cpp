#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int const mx = 1e5;
int tmp[mx];

void display(int arr[], int sz)
{
    int i;
    for(i=0; i<sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void marge(int *arr, int l, int m, int h)
{
    int i,j,k;
    k = l;
    i = l;
    j = m+1;

    while(i<=m && j<=h)
    {
        if( arr[i] >= arr[j] ) tmp[k++] = arr[j++];
        else tmp[k++] = arr[i++];
    }
    for(; i<=m; i++) tmp[k++] = arr[i];
    for(; j<=h; j++) tmp[k++] = arr[j];

    for(i=l; i<=h; i++)
    {
        arr[i] = tmp[i];

    }
}

void iMargeSort(int *arr, int n)
{
    int p,i;
    int low,mid,hig;

    for(p=2; p<=n; p=p*2)
    {
        for(i=0; i+p-1<n; i=i+p)
        {

            low = i;
            hig = i+p-1;
            mid = (low+hig)/2;
            marge(arr,low,mid,hig);
        }
         if( n-i > p/2 )
            {
                low = i;
                hig = i+p-1;
                mid = (low+hig)/2;
                marge(arr, low, mid, n-1);
            }

    }
    if(p/2 < n)
    {
        marge(arr,0,p/2-1,n-1);
    }
}

int main ()
{
    int arr[] = {8,7,6,5,4,3,2,1,4} ;
    int siz = 9;

    cout<<"ROW Arrays: "<<endl;
    display(arr,siz);

    iMargeSort(arr,9);

    cout<<endl<<" Marge SORTED Arrays: "<<endl;
    display(arr,siz);

    return 0;
}
