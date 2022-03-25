#include <iostream>
#include <math.h>

using namespace std;

const int Z=100;
bool t[Z-1];

void wypelnij(bool t[]);
void sito(bool t[]);
void wypisz(bool t[]);
main()
{
    wypelnij(t);
    sito(t);
    wypisz(t);
}
void wypelnij(bool t[])
{
    for (int i=0; i<=Z-2; i++)
        t[i]=1;
};
void sito(bool t[])
{
    for (int i=2;i<=sqrt(Z);i++)
        if (t[i-2])
        {
            int j=i*i;
            while (j<=Z)
            {
                t[j-2]=0;
                j+=i;
            }
        }
};
void wypisz(bool t[])
{
    for (int i=2;i<=Z;i++)
        if (t[i-2])
            cout<<i<<" ";
};
