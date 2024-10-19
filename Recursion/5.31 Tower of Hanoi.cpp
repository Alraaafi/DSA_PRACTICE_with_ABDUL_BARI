
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;
static int cnt=0;
void TOH(int n, int A, int B, int C)
{
    if(n==0) return;
    else{
        TOH(n-1,A,C,B); //TOH(n-1, From, using, to);

        cnt++;
        cout<<"MOVE: "<<cnt<<" is ( "<<A<<"->"<<C<<" )"<<endl;

        TOH(n-1,B,A,C);
    }
}

int main()
{
    TOH(3,1,2,3);
}

