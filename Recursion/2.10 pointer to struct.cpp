#include<iostream>
using namespace std;

struct rec
{
    int w;
    int h;
};

int main ()
{
    rec *p;
    //p = (rec*)malloc(sizeof(rec));

    //or...
    p = new rec;


    p->h  = 10;
    p->w = 5;

    int a =  p->h * p->w;
    cout<<a<<endl;

}
