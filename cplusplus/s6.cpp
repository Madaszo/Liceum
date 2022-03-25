#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<math.h>
#include<stdio.h>
using namespace std;

string najdluzszy(string s)
{
    int d=0,p=0,d1=0,p1=0,i=0;
    while (i<s.size())
    {
        if (s[i]!=' ')
        {
            d1=1;
            i++;
            p1=i;
            while ((s[i]!=' ')&&(i<s.size()))
            {
                d1++;
                i++;
            }
            if (d1>d)
            {
                d=d1;
                p=p1;
            }
        }
        else i++;
    }
string s1(s,p,d);
return s1;
};
string s;
main ()
{
    getline(cin,s);
    cout<<endl<<s<<endl<<endl;
    cout<<najdluzszy(s);
}
