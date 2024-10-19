
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

struct Array
{
    int capacity;
    int a[10];
    int sz;
} arr;

void display()
{
    for(int i = 0; i<arr.sz; i++)
    {
        cout<< arr.a[i]<< " ";
    }
    cout<<endl;
}

void inSort(struct Array *Arr, int v)
{
    if(Arr->sz == Arr->capacity) return ;

    int i = Arr->sz-1;

    while( v < Arr->a[i] )
    {
        Arr->a[i+1] = Arr->a[i];
        i--;
    }

    Arr->a[i+1] = v;
    Arr->sz++;
}

int main()
{
    arr = {10, {2,4,3,6,7,9}, 6};

    display();

    inSort(&arr,5);

    display();
}



