#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <math.h>

using namespace std;

const int N=9;

int a[N+1];

main()
{
//for (int i=N; i>=0; i--)
//{
//    cout<<"podaj wartoœæ a"<<i<<":";
//    cin>>a[i];
//}
for (int i=0; i<=N; i++)
    a[i]=i+1;

int x=10;
//cout<<"podaj wartoœæ x: ";
//cin>>x;
int y=x;
double w=a[0];
for (int i=1; i<=N; i++)
{
    w=w+a[i]*x;
    x=x*y;
    cout<<w<<endl;
}
cout<<"wartoœæ wielomianu wynosi: "<<w;
}
