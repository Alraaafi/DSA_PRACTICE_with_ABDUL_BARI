#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int sz)
{
    int i;
    for(i=0; i<sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SelectionSort(int *arr, int n)
{
    int i,j,k;

    for(i=0; i<n-1; i++)
    {
        for(j=k=i; j<n; j++)
        {
            if(arr[j]<arr[k])
            {
                k = j;
            }
        }

        //Swaping:
        int t = arr[i];
        arr[i] = arr[k];
        arr[k]  = t;
    }
}

int main ()
{
    int arr[] = {8,7,6,5,4,3,2,1} ;
    int siz = 8;

    cout<<"ROW Arrays: "<<endl;
    display(arr,siz);

    SelectionSort(arr,siz);

    cout<<endl<<"SORTED Arrays: "<<endl;
    display(arr,siz);


}
