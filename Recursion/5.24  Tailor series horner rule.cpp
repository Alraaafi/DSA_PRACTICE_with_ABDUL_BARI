
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

double ex(double x, double n)
{
    double r;
    static double  ans=1;
    if(n==1)  return ans;
    else{
        ans = 1 + (x/n)*ans;

        return ex(x,n-1);
    }
}

int main()
{
    cout<<ex(1,10)<<endl;
}

