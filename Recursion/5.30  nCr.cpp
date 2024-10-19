
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

//Genaral Recursive process-1:
int fact(int n)
{
    if(n==0) return 1;
    else return n*fact(n-1);
}

int nCr(int n, int r)
{
    int nem = fact(n);
    int dem = fact(r) * fact(n-r);
    return nem/dem;
}


//Genaral Recursive process-2:

int NCR(int n, int r)
{
    if(r==0 || r==n) return 1;
    else
    {
        return NCR(n-1,r-1) + NCR(n-1,r); //using pascal triangle
    }
}
int main()
{
    cout<<nCr(5,3)<<endl;

    cout<<NCR(5,3)<<endl;
}

