
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

int fun(int n)
{
    cout<<n<<" ";
    if(n>100) return n-10;
    else{
        return fun( fun(n+11) );
    }
}

int main()
{
    int n;
    cin>>n;

    int res = fun(n);

    cout<<res<<endl;

}

