
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sz=3;

    int *p,*q;

    p = new int[sz];
    p[0] = 10;
    p[1] = 30;
    p[2] = 50;

    int newSz = 5; //size increased
    q = new int[newSz];

    for(int i=0; i<sz; i++)
    {
        q[i] = p[i];
    }

    delete []p;
    p = q;
    q = NULL;

    p[3] = 70;
    p[4] = 90;

    for(int i=0; i<newSz; i++) cout<<p[i]<< " ";cout<<endl;




}

