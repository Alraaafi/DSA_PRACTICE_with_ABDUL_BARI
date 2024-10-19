
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ArraySize=5;

    //static array:
    int Arr[ArraySize];

    //dynamic Array:
    int *ptrArr;
        //ptrArr = (int *) malloc( ArraySize * sizeof(int) ); //For C
    ptrArr = new int[ArraySize]; //For C++


    cout<<"ENTER "<<ArraySize<<" Number: ";
    for(int i=0; i<ArraySize; i++)
    {
        int x;
        cin>>x;
        Arr[i] = x;
        ptrArr[i]=x;
    }

    cout<<"STATIC ARAAY : ";
    for(int i=0; i<ArraySize; i++)
    {
        cout<<Arr[i]<<" ";
    } cout<<endl;

    cout<<"DYNAMIC ARAAY : ";
    for(int i=0; i<ArraySize; i++)
    {
        cout<<ptrArr[i]<< " ";
    } cout<<endl;



    delete []ptrArr;
    //free(ptrArr); //for C
}

