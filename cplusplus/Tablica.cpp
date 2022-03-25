#include <iostream>
//#include<stdlib.h>
//#include<time.h>
#include <iomanip>
//#include<math.h>

using namespace std;

void wypis (int lt[10][10])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<setw(5)<<lt[i][j];
        }
        cout<<endl;
    }
};
main()
{
    int t[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            t[i][j]=(10*i+j);
        }
    }
    wypis(t);
}
