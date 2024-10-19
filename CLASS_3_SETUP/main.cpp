#include <iostream>

using namespace std;

int main()
{
    int s=0;

    int A[]={1,5,8,3,9};
    for(auto x : A) s = s + x;

    cout<<s<<endl;
}
