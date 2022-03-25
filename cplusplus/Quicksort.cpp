#include<iostream>
#include<stdlib.h>
using namespace std;
int x;
int t[10];
void Qs(int t[],int l,int p)
{
    if (p<=l)
            return;
    int i=l-1;
    int j=p+1;
    int pirot=t[(l+p)/2];
    while(1)
    {
        if (p<=l)
            return;
        while(t[++i]<pirot);
        while(t[--j]>pirot);
        if (i<=j)
        {
            swap(t[i],t[j]);
            i++;
            j--;
        }
        else
            break;
        if (l<j)
            Qs(t,l,j);
        if (i<p)
            Qs(t,i,p);
        return;
    }
    return;
}
main()
{
    for(int i=0; i<10; i++)
    {
        t[i]=rand()%100;
        cout<<t[i]<<"  ";
    }
    Qs(t,0,9);
    cout<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<t[i]<<"  ";
    }
}
