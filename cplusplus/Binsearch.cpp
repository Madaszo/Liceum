#include<iostream>
using namespace std;
int x;
int Binsearch(int l, int p, int x, int t[])
{
    int srodek=(l+p)/2;
    if (t[srodek]==x)
        return srodek;
    else if (x<t[srodek])
        p=srodek-1;
    else
        l=srodek+1;
    if (l>p)
        return -1;
    return Binsearch(l,p,x,t);
}
int t[10];
main()
{
    for (int i=0;i<10;i++)
    {
        t[i]=i*10;
    }
    cout<<"podaj liczbe szukana: ";
    cin>>x;
    cout<<endl<<"pozycja wynosi: "<<Binsearch(0,9,x,t)<<endl;
}
