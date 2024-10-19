#include <iostream>

using namespace std;

int main()
{
    int A[] = {1,2,3,4,5};
    int sum = 0;

    for(int a : A)
    {
        sum = sum + a;
    }
    cout << "Result: "<<sum << endl;
    return 0;
}
