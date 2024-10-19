#include<iostream>
using namespace std;

struct Rec{
 int b,h;
};
int main ()
{
    struct Rec rec1;
    rec1.b = 4;
    cout<<rec1.b<<endl;
    return 0;
}
