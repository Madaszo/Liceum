#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<fstream>
#include<iostream>
using namespace std;

ifstream plo;
ofstream plz;
string s;
bool t[1000];
bool liczbaZer(string s)
{
    int z=0;
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='1')
            j++;
        else
            z++;
    }
    if (z>j)
        return 1;
    else
        return 0;
};
bool bloki(string s)
{
    bool k=0;
    int i;
    for (i=1;i<s.length();i++)
    {
        if ((s[i-1]=='1')&&(s[i]=='0'))
            break;

    }
    if ((i==(s.length()))&&(s[i-1]=='1'))
        {k=1;}
    return k;
};
int zera(string s)
{
    int d=0;
    int dmax=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            while(s[i]=='0')
            {
                d++;
                i++;
            }
            if (d>dmax)
            {
                dmax=d;
            }
            d=0;
        }
    }
    return dmax;
};
main()
{
    for (int i=0;i<1000;i++)
        t[i]=0;
    int dmax=0;
    int odp1=0;
    int odp2=0;
    int i=0;
    plo.open("slowa.txt");
    plz.open("wynik4.txt");
    while (!plo.eof())
    {
        plo>>s;
        if (plo.fail())
            break;
        if (liczbaZer(s))
            odp1++;
        if (bloki(s))
            odp2++;
        if (zera(s)>dmax)
        {
            for (int j=0;j<=i;j++)
                t[j]=0;
            dmax=zera(s);
        }
        if (zera(s)==dmax)
            t[i]=1;
        i++;
    }
    plo.close();
    plo.open("slowa.txt");
    cout<<"4.1.: "<<odp1<<endl;
    plz<<"4.1.: "<<odp1<<endl;
    cout<<"4.2.: "<<odp2<<endl;
    plz<<"4.2.: "<<odp2<<endl;
    cout<<"4.3.: "<<endl;
    plz<<"4.3.: "<<endl;
    i=0;
    int l=0;
    while(!plo.eof())
    {
        plo>>s;
        if (plo.fail())
            break;
        if (t[i])
        {
            plz<<s<<endl;
            cout<<s<<endl;
            l++;
        }
        i++;
    }
    plz<<l;
    cout<<l;
    plo.close();
    plz.close();
}
