
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;
int pw(int m, int n)
{
    if(n==0)
    return 1;
    else if(n%2==0)
        return pw(m*m, n/2);
    else
        return m * pw(m*m, (n-1)/2 );
}

int main()
{
    int n,m;
    cin>>m>>n;

    cout<<"The POWER OF m to the power n is: "<<pw(m,n)<<endl;


}

