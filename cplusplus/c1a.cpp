#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<iomanip>
using namespace std;

int t[5][5];

main()
{
    srand(time(NULL));

    for (int j=0; j<=4; j++)
    {
for (int i=0; i<=4; i++)
{
    t[j][i]= rand()%51 + 20;
    cout<<setw(3)<<t[j][i];
}
cout<<endl;
    }

}
