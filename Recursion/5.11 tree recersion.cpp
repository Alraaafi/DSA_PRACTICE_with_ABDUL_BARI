#include<iostream>
using namespace std;

void call(int n)
{
    if(n>0)
    {
        cout<<n<<" ";

        call(n-1);
        call(n-1);
    }
}

int main ()
{
    call(5);

}
