#include<iostream>
using namespace std;

void fn(int n)
{
    if(n>0)
    {
        cout<<n<<endl; //Tail Recursion
        fn(n-1);
        //cout<<n<<endl; //HEAD Recursion
    }
}

int main ()
{
    int x = 3;
    fn(x);
}
