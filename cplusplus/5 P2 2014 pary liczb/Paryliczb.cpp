#include <fstream>
#include <iostream>
using namespace std;

ifstream plo;

ofstream plz;

int l1,l2,a,b,c;
int sumacyfr(int a)
{
    int s=0;
    int b=10;
    while (a)
    {
        s+=a%b;
        a=a/b;
    }
return s;
}
int NWDrek(int a, int b)
{
    if (!b)
        return a;
    return NWDrek(b,a%b);
}
main()
{
    plo.open("PARYLI.TXT");
    plz.open("wyniki");
while (!plo.eof())
{
    plo>>l1;
    plo>>l2;
    if (plo.fail())
        break;
    if (l1>l2)
    {
        int a=l1;
        l1=l2;
        l2=a;
    }
    if ((l2%l1)==0)
        a++;
    if (NWDrek(l1,l2)==1)
        b++;
    if (sumacyfr(l1)==sumacyfr(l2))
        c++;

}
cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
}
