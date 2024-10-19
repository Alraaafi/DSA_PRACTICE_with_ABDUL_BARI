#include<iostream>
using namespace std;

//Or Declear Globally
//int x = 0;

int fn(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fn(n-1)  + x;
    } else return 0;
}

int main ()
{
    int num = 5;
    cout<<fn(num)<<endl;

    cout<<fn(num)<<endl;
}
