#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //String Example: finding

    string str;
    cin>>str;

    int bitHash = 0;

    for(int i=0; i<str.size(); i++)
    {
        int w = 1;
        w = w<<(str[i]-'a');

        if(bitHash&w) cout<<str[i]<<" Is Doublicate Letter."<<endl;
        else bitHash |= w;
    }

}

