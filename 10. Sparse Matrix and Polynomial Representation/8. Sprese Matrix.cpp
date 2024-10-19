#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Created by Tanvir Ahmed Rafi (Alraaafi)

class Element
{
public:
    int i;
    int j;
    int x;
};

class Sperse
{
private:
    int n;
    int m;
    int num;
    Element *ele;

public:
    Sperse(int n, int m, int num)
    {
        this->n = n;
        this->m = m;
        this->num = num;

        ele = new Element[num];
    }

    void take()
    {
        for(int k=0; k<num; k++)
        {
            cin>>ele[k].i>>ele[k].j>>ele[k].x;
        }
    }

    void display()
    {
        int k=0,i,j;

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(ele[k].i-1==i && ele[k].j-1==j)
                    cout<<ele[k++].x<<" ";
                else
                    cout<<"0 ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int n,m,num;
    cout<<"Enter Matrix dim in n,m and number of elements: ";
    cin>>n>>m>>num;

    Sperse S(n,m,num);

    S.take();

    S.display();


}

