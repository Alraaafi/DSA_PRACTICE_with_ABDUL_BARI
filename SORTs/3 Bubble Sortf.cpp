#include<iostream>
using namespace std;

void swp(int &a, int &b)
{
    int tmp=a;
    a = b;
    b = tmp;
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

void BubbleSort(int *arr, int n)
{
    int i,j,flag=0;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swp(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0) break;
        flag=0;
    }
}

int main ()
{
    int arr[] = {8,7,6,5,4,3,2,1} ;
    int siz = 8;

    cout<<"ROW Arrays: "<<endl;
    display(arr,siz);

    BubbleSort(arr,siz);

    cout<<endl<<"SORTED Arrays: "<<endl;
    display(arr,siz);


}
