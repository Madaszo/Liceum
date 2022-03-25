#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<iomanip>
#include <math.h>
using namespace std;
main()
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            int k=1;
            while(t[i][i]==0)
            {
                for(int l=0;l<=n;l++)
                {
                    swap(t[l][i],t[l][i+k]);
                }
            }

        }
    }
}
