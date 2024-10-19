#include<iostream>
using namespace std;

int main ()
{
    int *p,*q,*ptr;

    int value = 100;
    ptr = &value;
    cout<<*ptr<<endl;

    //pointer taking value in stack mem:
    int arr[5] = {8,6,4,3,2};
    p = arr;
    for(int i=0; i<5; i++)
    {
        //cout<<*p<< " ";
        //*p++; //or
        cout<<p[i]<< " ";
    }
    cout<<endl;

    //pointer taking value in Heap mem by dynamic M. A.:
    q = (int *) malloc(5*sizeof(int));
    q[0]=1;q[1]=6;q[2]=5;q[3]=8;q[4]=9;
    cout<<sizeof(q)<<endl;
    for(int i=0; i<5; i++)
        cout<<q[i]<<" ";
    cout<<endl;

    free(p); //c lang
    delete []p;

}
