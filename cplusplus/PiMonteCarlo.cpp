#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;
const long int A=4000;
const long int B=1000000;
double kolo;
double pi;
double k;
string s;
main()
{
    double x,y;
    srand(time(NULL));
    for(long int i=0;i<B;i++)
    {
        x=rand()/A;
        y=rand()/A;
        cout<<setprecision(30)<<x<<endl<<y<<endl;
        if (pow(x-(A/2),2)-pow(y-(A/2),2)<=pow((A/2.0),2))
            kolo++;
        k++;
        pi=4*((double) kolo/k);
        cout<<setprecision(30)<<pi<<endl;
        getline(cin,s);
    }
    pi=4*((double) kolo/k);
        cout<<setprecision(30)<<pi<<endl;
}




