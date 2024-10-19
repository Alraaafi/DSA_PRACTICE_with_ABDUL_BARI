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


void rMargeSort(int *arr, int l, int h)
{
    int mid = (l+h)/2;

    if(l>=h) return;
    rMargeSort(arr,l,mid);
    rMargeSort(arr, mid+1, h);

    marge(arr, l, mid, h);
}


int main ()
{
    int arr[] = {8,7,6,5,4,3,2,1,4} ;
    int siz = 9;

    cout<<"ROW Arrays: "<<endl;
    display(arr,siz);

    rMargeSort(arr,0,8);

    cout<<endl<<" Marge SORTED Arrays: "<<endl;
    display(arr,siz);

    return 0;
}
