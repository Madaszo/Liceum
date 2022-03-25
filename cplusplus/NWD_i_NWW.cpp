#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <math.h>

using namespace std;

int a,b;

int NWD(int a, int b);
int NWW(int a, int b);
int NWDrek(int a, int b);
main()
{
    cin>>a>>b;
    cout<<"NWD wynosi: "<<NWD(a,b)<<endl;
    cout<<"NWW wynosi: "<<NWW(a,b)<<endl;
    cout<<"NWDrek wynosi: "<< NWDrek(a,b)<<endl;
}

int NWD(int a, int b)
{
    int c;
    while(b)
    {
        c=a;
        a=b;
        b=c%b;
    }
    return a;
};
//-----------------------------------------------------------------------------------
int NWW(int a, int b)
{
    return (a*b/NWD(a,b));
};
//-----------------------------------------------------------------------------------
int NWDrek(int a, int b)
{
    if (!b)
        return a;
    return NWDrek(b,a%b);
};
//-----------------------------------------------------------------------------------
