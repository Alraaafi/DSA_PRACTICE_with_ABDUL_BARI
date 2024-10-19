#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swp(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void display(int arr[], int sz)
{
    int i;
    for(i=0; i<sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partiation(int *arr, int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;

    do
    {
        do{i++;} while(pivot>=arr[i]);

        do{j--;} while(pivot<arr[j]);

        if(i<j)
        {
            swp(arr[i],arr[j]);
        }
    }
    while(i<j);

    swp(arr[l],arr[j]);
    return j;
}

void QuickSort(int *arr, int l, int h)
{
    int p;
    if(l>=h) return;

    p = partiation(arr,l,h);

    QuickSort(arr,l,p);
    QuickSort(arr,p+1,h);
}

int main ()
{
    int arr[] = {8,7,6,5,4,3,2,1,INT32_MAX} ;
    int siz = 8;

    cout<<"ROW Arrays: "<<endl;
    display(arr,siz);

    QuickSort(arr,0,8);

    cout<<endl<<" Quick SORTED Arrays: "<<endl;
    display(arr,siz);

    return 0;
}
