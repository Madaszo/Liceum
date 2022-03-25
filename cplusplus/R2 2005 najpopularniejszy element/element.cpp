#include <iostream>
#include <fstream>

using namespace std;

int Najlepszasuma (int t[], int dl)
{
    int sum = 0, sumax =0;
    for (int i=0; i <dl ; i++ )
    {
        for (int l=i; l<dl; l++)
        {
            sum= sum+t[l];
            if (sum>sumax)
                sumax=sum;

        }
        sum=0;
    }
 return sumax;

}
////////////////////////
int Najpopularniejszy(int t1[],int dl)
{
    int tpom [dl];
    int maks=0;

    for (int i=0; i<dl; i++)
    {
        tpom[i]=0;
    }

     for (int i=0; i<dl; i++)
     {
        tpom[t1[i]]++;
     }

    for (int i=0; i<dl; i++)
    {
        if (tpom[i]>tpom[maks])
        {
            maks=i;
        }

    }
    return maks;
}
/////////////////////////
ofstream opl;
ifstream ipl;

int t1 [20];
int t2[200];
int t3 [10000];

main()
{
 opl.open("wynik1.txt");
 ipl.open("dane5-1.txt");

 for (int i=0; i<20; i++)
 {
     ipl>> t1[i];
 }

cout<<"1 suma: "<<Najlepszasuma(t1, 20)<<endl;
cout<<"1 najpopularniejsza: "<<Najpopularniejszy(t1, 20)<<endl;

opl.close();
ipl.close();

opl.open("wynik2.txt");
ipl.open("dane5-2.txt");

for (int i=0; i<200; i++)
{
    ipl>> t2[i];
}

cout<<"2 suma: "<<Najlepszasuma(t2, 200)<<endl;
cout<<"2 najpopularniejsza: "<<Najpopularniejszy(t2, 200)<<endl;

opl.close();
ipl.close();

opl.open("wynik3.txt");
ipl.open("dane5-3.txt");

for (int i=0; i<10000; i++)
{
    ipl>> t3[i];
}

cout<<"3 suma: "<<Najlepszasuma(t3, 10000)<<endl;
cout<<"3 najpopularniejsza: "<<Najpopularniejszy(t3, 10000)<<endl;

opl.close();
ipl.close();

}




