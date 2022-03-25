#include<fstream>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<math.h>
#include<stdio.h>

using namespace std;

ifstream plo;
ofstream plz;
string s;
bool palindrom(string s)
{
    bool t=1;
    int i=0;
    while (i<=(s.length()-i-1))
    {
        if(s[i]!=s[s.length()-i-1])
        {
            t=0;
            break;
        }
        i++;
    }
    return t;
}
main()
{
    plo.open("dane.txt");
    plz.open("wynik.txt");
    while(!plo.eof())
    {
        plo>>s;
        if (plo.fail())
            break;
        if (palindrom(s))
            plz<<s<<endl;
    }
    plo.close();
    plz.close();
}
