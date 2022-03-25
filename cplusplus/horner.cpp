#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <math.h>

using namespace std;

const int N=5;

int a[N+1];
double horner(int a[], int x, int n);
double hornerek(int a[],int x, int n);
////////////////////////////////////////////////
main()
{
for (int i=N; i>=0; i--)
{
    cout<<"podaj wartoœæ a"<<i<<":";
    cin>>a[i];
}
//for (int i=0; i<=N; i++)
//    a[i]=i+1;
int x;
cout<<"podaj wartoœæ x: ";
cin>>x;
cout<<setprecision(30);
cout<<"wartoœæ wielomianu wynosi: "<<horner(a,x,N)<<endl;
cout<<"wartoœæ wielomianu rekurencyjnie wynosi: "<<hornerek(a,x,0)<<endl;
}
/////////////////////////////////////////////////
double horner(int a[], int x, int n)
{
double w=a[n];
for (int i=n-1; i>=0; i--)
{
    w=w*x+a[i];
}
return w;
};
///////////////////////////////////////////////////
double hornerek(int a[],int x, int n)
{
    if (n==N)
        return a[n];
    return (hornerek(a,x,n+1)*x+a[n]);
};
