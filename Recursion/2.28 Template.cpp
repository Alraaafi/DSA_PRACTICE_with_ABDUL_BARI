#include<iostream>
using namespace std;
template<class T>
class oparation
{
    private:
    T a;
    T b;

    public:

    oparation(T a, T b);

    T sum();

    T sub();
};

template<class T>
     oparation<T>:: oparation(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

template<class T>
   T oparation<T>:: sum()
    {
        T c = a+b;
        return c;
    }

template<class T>
    T oparation<T>:: sub()
    {
        T d = a-b;
        return d;
    }

int main ()
{
    oparation<int> add(20,5);

    cout<<add.sum()<<" "<<add.sub()<<endl;
    cout<<"SUCSESS!"<<endl;
}
