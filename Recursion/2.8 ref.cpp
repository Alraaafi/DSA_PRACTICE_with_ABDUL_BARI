#include<iostream>
using namespace std;

int main ()
{
    int a =10;
    int &b = a;

    b = 19;
    cout<<a<<endl;

    a = 88;
    cout<<b<<endl;

}
