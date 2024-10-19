#include<iostream>
using namespace std;

void callB(int);

void callA(int n)
{
    if(n>0)
    {
        cout<<"FROM A: "<<n<<endl;

        callB(n-1);
    }
}
void callB(int n)
{
    if(n>1)
    {
        cout<<"FROM B: "<<n<<endl;
        callA(n/2);
    }
}

int main ()
{
    callA(20);

}
