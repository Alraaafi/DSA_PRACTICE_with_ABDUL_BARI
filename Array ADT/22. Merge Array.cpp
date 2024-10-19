
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

struct Array
{
    int capacity;
    int a[100];
    int sz;
} arr;

void display(struct Array Arr)
{
    for(int i = 0; i<Arr.sz; i++)
    {
        cout<< Arr.a[i]<< " ";
    }
    cout<<endl;
}

struct Array mrg( struct Array a1,  struct Array a2)
{

    struct Array a3 ;
    a3.capacity  = 20;
    a3.sz = a1.sz + a2.sz;
    int i,j,k;
    i=j=k=0;

    while(i<a1.sz && j<a2.sz  )
    {
        if( a1.a[i]  > a2.a[j]) a3.a[k++] = a2.a[j++];
        else a3.a[k++] = a1.a[i++];
    }
    while(i<a1.sz) a3.a[k++] = a1.a[i++];
    while(j<a2.sz) a3.a[k++] = a2.a[j++];


    return a3;
};

int main()
{
    //arr = {10, {2,4,3,6,7,9}, 6};
    struct Array arr1 = {20, {2,3,4,6,7,9}, 6};
    struct Array arr2 = {20, {1,5,6,8,11}, 5};

    display(arr1);
    display(arr2);

    struct Array arr3;

    arr3 = mrg(arr1, arr2 );

    cout<<"MERGE ARRAY: "<<endl;

    display(arr3);


}



