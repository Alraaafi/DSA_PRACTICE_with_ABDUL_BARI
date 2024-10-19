
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

void append(struct Array &arr, int val)
{
    arr.a[ arr.len ] = val;
    arr.len++;
}

void insrt(struct Array &arr, int ind, int val)
{
    for(int i=arr.len; i>ind; i--)
    {
        arr.a[i] = arr.a[i-1];
    }
    arr.a[ind] = val;
    arr.len++;
}
int main()
{
    struct Array arr = { {2,5,6,7,8} ,100, 5};
    //dis(arr);
    append(arr,99);
    dis(arr);

    insrt(arr,2,88);
    dis(arr);


}

