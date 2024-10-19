
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

void delt( struct Array &arr, int ind )
{
    for(int i=ind; i<arr.len-1; i++)
    {
        arr.a[i] = arr.a[i+1];
    }
    arr.len--;
}
int main()
{
    struct Array arr = { {2,5,6,7,8} ,100, 5};
    dis(arr);

    delt(arr,2);
    dis(arr);


}

