
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

void insrt(int *arr, int in, int val, int sz)
{
    for(int i=sz; i>in; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[in] = val;
}

int main()
{
    int arr[] = { 2,5,6,7,8,10};


    insrt(arr,2,88,5);

    for(auto v : arr) cout<<v<<" "; cout<<endl;


}

