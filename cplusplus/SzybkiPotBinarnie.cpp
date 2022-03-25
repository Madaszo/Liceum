#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
using namespace std;

const int N=4;

int szybkipod(bool t[],int p,int n);
int szybkipodrek(int p, int k);

bool t[N];
int p,x;

main()
{
    cout<<"podaj wykladnik w systemie dziesietnym: ";
    cin>>x;
    cout<<"podaj wykladnik w systemie binarnym: ";
    for (int i=0;i<N;i++)
    {
        t[i]=getch()-48;
        cout<<t[i];
    }
    cout<<endl<<"podaj podstawe: ";
    cin>>p;
    cout<<endl<<szybkipod(t,p,N)<<endl<<szybkipodrek(p,x);
};
int szybkipod(bool t[],int p,int n)
{
    int w=1;
    for (int i=0; i<n;i++)
        if (t[i])
            w*=w*p;
        else
            w*=w;
    return w;
};
int szybkipodrek(int p, int k)
{
    if (!k)
        return 1;
    int a=szybkipodrek(p,k/2);
    if (k%2)
        return a*p*a;
    return a*a;
};
