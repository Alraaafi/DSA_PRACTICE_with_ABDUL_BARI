
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

double ex(int x, int n)
{
    static double p=1,f=1;
    double r;
    if(n==0) return 1;
    else
    {
        r = ex(x,n-1);

        p = p*x;
        f = f*n;

        return r + p/f;
    }
}

int main()
{
    cout<<ex(1,5)<<endl;
}

