#include<iostream>
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

void InsertSort(int *arr, int n)
{
    int i,j,x;

    for(i=0; i<n; i++)
    {
        x = arr[i];
        for(j=i-1; j>=0 && x < arr[j]; j--)
        {
            if(x < arr[j] )
            {
                arr[j+1] = arr[j];
            }
        }
        arr[j+1] = x;
    }
}

int main ()
{
    int arr[] = {8,7,60,5,4,3,2,1} ;
    int siz = 8;

    cout<<"ROW Arrays: "<<endl;
    display(arr,siz);

    InsertSort(arr,siz);

    cout<<endl<<"SORTED Arrays: "<<endl;
    display(arr,siz);


}
