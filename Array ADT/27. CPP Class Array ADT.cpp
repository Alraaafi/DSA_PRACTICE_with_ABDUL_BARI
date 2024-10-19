
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int len;

public:
    Array()
    {
        size = 10;
        A = new int[size];
        len=0;
    }

    Array(int sz)
    {
        size = sz;
        A = new int[size];
        len = 0;
    }

    int insrt(int in, int val);
    int delet(int in);
    void display();
    int mx();
};

int Array :: insrt( int in, int val )
{
    if(in>=0 && in<=len)
    {
        for(int i=len-1; i>=in; i--)
        {
            A[i+1] = A[i];
        }
        A[in] = val;
        len++;
        return val;
    }
    else
    {
        cout<<endl<<"!!!!---Not Valid---!!!!"<<endl<<endl;
        return -1;
    }
}

void Array :: display()
{
    for(int i=0; i<len; i++) cout<<A[i]<<" ";
    cout<<endl;
}

int Array :: delet( int in)
{
    if(in>=0 && in<len)
    {
        int val = A[in];
        for(int i=in; i<len; i++)
        {
            A[i] = A[i+1];
        }
        len--;
        return val;
    }
    else
    {
        cout<<endl<<"!!!!---Not Valid---!!!!"<<endl<<endl;
        return -1;
    }
}

int Array :: mx()
{
    int m = 0;

    for(int i=0; i<len; i++)
    {
        if(A[i]>m) m = A[i];
    }
    return m;
}
int main()
{
    //arr = {10, {2,4,3,6,7,9}, 6};
    class Array arr(20);

    arr.insrt(0,170);
    arr.insrt(1,15);
    arr.insrt(6,9);
    arr.insrt(2,24);
    arr.insrt(3,67);

    arr.display();

    arr.delet(2);

    arr.display();

    cout<<"MAX ELE: "<<arr.mx()<<endl;

}



