
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

int Lin(struct Array &arr, int val)
{
    for(int i=0; i<arr.len; i++)
    {
        if(arr.a[i]==val) return i;
    }
    return -1;
}

int main()
{
    struct Array arr = { {2,5,6,7,8,3} ,100, 6};
    dis(arr);

    cout<<Lin(arr,67)<<endl;

}

