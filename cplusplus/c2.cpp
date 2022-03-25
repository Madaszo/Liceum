#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<iomanip>
#include <math.h>

using namespace std;



main()
{


    for (int a=1000000; a<=2000000; a++)
{
    bool czyp=true;
    for (int i=2; i<=sqrt(a); i++)
    {

    if (a%i==0)
    {
       czyp=false;
    break;
    }


}
 if (czyp) { cout<<setw(8)<<a; }
}
}
