
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //2D Array Process 1: static array
    int A[2][3]={ {1,2,3}, {6,7,8} };

    //2D Array Process 2: single pinter use DMA
    int *B[2];
    B[0] = new int[3];
    B[1] = new int[3];

    //2D Array Process 3: Double pinter use DMA
    int **C;
    C = new int*[2];
    C[0] = new int[3];
    C[1] = new int[3];

}

