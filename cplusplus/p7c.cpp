#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <iomanip>
#include<math.h>

using namespace std;

const int N=10;
const int A=20;
const int B=29;

void losowanie(int t[N], int n, int a, int b);
main()
{
    int t[N];
    losowanie(t,N,A,B);
    for(int i=0; i<N;i++)
    {
        cout<<setw(4)<<t[i];
    }
}
void losowanie(int t[N], int n, int a, int b)
{
    int c;
    srand(time(NULL));
    int w[b-a];
    for(int i=a; i<b+1; i++)
    {
        w[i-a]=i;
    };
    int p=b-a+1;
    for(int i=0; i<n; i++)
    {
        c= rand() % p ;
        t[i]=w[c];
        p--;
        w[c]=w[p];
    };
}
