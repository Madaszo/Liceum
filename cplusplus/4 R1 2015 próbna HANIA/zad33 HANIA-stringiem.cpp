#include <iostream>
using namespace std;

const int N = 2;            // ilosc bajtow
const int R = 4;            // ilosc roznych znakow
const int BITY = 3;         //ilosc bitow do zakodowania 1 znaku

unsigned char v[N];

struct
{
    char znak;
    string kod;
} t[R];

string s, vs, kod;
int i;
string dectobin(int l)
{
    string ls;
    string s="";
    while(l)
    {
        ls=(l%2)+48;
        s=ls+s;
        l=l/2;
    }
    while(s.size()<8)
        s="0"+s;
    return s;
}
//-------------------------------------
//-------------------------------------
//-------------------------------------

//----------------------------------------------------------------

main()
{
t[0].znak= 'H';     t[0].kod= "001";
t[1].znak= 'A';     t[1].kod= "010";
t[2].znak= 'N';     t[2].kod= "011";
t[3].znak= 'I';     t[3].kod= "100";

v[0]= 41;
v[1]= 196;
//-------------------------------------
vs=dectobin(v[0])+dectobin(v[1]);
cout<<vs<<endl;
while(vs.size()>=BITY)
{
    kod=vs.substr(0,3);
    if (kod=="000")
        break;
    vs.erase(0,3);
    i=-1;
    while(t[++i].kod!=kod);
    s+=t[i].znak;
    cout<<s<<endl;
}







cout << "odkodowano: " << s <<endl;
}
