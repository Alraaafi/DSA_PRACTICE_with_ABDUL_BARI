
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

struct Array
{

    int a[10];
    int mx;
    int len;

};

void dis(struct Array arr)
{
    for(int i=0; i<arr.len; i++)
        cout<<arr.a[i]<<" ";
    cout<<endl;
}

int get(struct Array arr, int in)
{
    if(in>=0 && in<arr.len)
        return arr.a[in];
    else
        return -1;
}

void seT(struct Array &arr, int v, int in)
{
    if(in>=0 && in<arr.len)
        arr.a[in] = v;
    else
        cout<<"NOt SETED"<<endl;

}

int maX(struct Array arr)
{
    int m = arr.a[0];

    for(int i=1; i<arr.len; i++)
    {
        if(m<=arr.a[i])
            m = arr.a[i];
    }
    return m;

}


int miN(struct Array arr)
{
    int m = arr.a[0];

    for(int i=1; i<arr.len; i++)
    {
        if(m>=arr.a[i])
            m = arr.a[i];
    }
    return m;

}

int sum(struct Array arr)
{
    int s = 0;

    for(int i=0; i<arr.len; i++)
    {
        s+=arr.a[i];
    }
    return s;

}

double avg(struct Array arr )
{

    return sum( arr )/(double)arr.len;
}

int main()
{
    struct Array arr = { {2,5,6,7,8,3} ,10, 6};
    dis(arr);

    cout<<get(arr,3)<<endl;

    seT(arr,13, 2);
    seT(arr,1, 4);

    cout<<maX(arr)<<endl;

    cout<<miN(arr)<<endl;

    cout<<sum(arr)<<endl;

    cout<<avg(arr)<<endl;


}

