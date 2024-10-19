
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

struct Array
{

    int a[100];
    int mx;
    int len;
};

void dis(struct Array arr)
{
    for(int i=0; i< arr.len; i++) cout<<arr.a[i]<< " ";
    cout<<endl;
}

int rBin(struct Array &arr, int h, int l, int x)
{
    int mid;

    if(h>=l)
    {
        mid = (h+l)/2;
        if(arr.a[mid]==x)
            return mid;
        else if( arr.a[mid]>x )
        {
            return rBin(arr, mid-1, l, x);
        }
        else
            return rBin(arr, h, mid+1, x);
    }

    return -1;
}

int main()
{
    struct Array arr = { {2,5,6,7,8,13} ,100, 6};
    dis(arr);

    cout<<rBin(arr,arr.len,0,6)<<endl;

}

