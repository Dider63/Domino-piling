#include<iostream>
using namespace std;
int main()
{
int M,N,a;
cin>> M>> N;
if(M>=1 && M<=16 &&
   N>=1 && N<=16 &&
   N>=M)
{
    int r;
    r=(M*N)/2;
    cout<< r;
}

    return 0;
}
