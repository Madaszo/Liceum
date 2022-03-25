#include<iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;

int t[10];

main()
{
    srand(time(NULL));

for (int i=0; i<=9; i++)
{
    t[i]= rand()%81 + 20;
    cout<<t[i]<<" ";
}


}
