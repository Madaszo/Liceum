#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <math.h>

using namespace std;
string tnij(string s , int l)
{
    cout<<"string: "<<s<<endl<<"L: "<<l<<endl;
    string s1="";
    for(int i=l;i<=l-1+(s.size()/3);i++)
    {
        s1=s1+s[i];
    };
    cout<<"string1: "<<s1<<endl;
    return s1;
};
bool trzy_regular(string s)
{
    cout<<s<<endl;
    if (s.size() == 1)
        return 1;
    if (s.size() % 3 != 0)
        return 0;
    if (tnij(s,0)==tnij(s,(s.size()/3)))
        return trzy_regular(tnij(s,0));
    else if (tnij(s,0)==tnij(s,s.size()/3*2))
        return trzy_regular(tnij(s,0));
    else return 0;

};
string s;
bool t;
main()
{
    getline(cin,s);
    t=trzy_regular(s);
    cout<<t;
}
