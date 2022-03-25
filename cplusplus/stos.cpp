#include <iostream>
//#include<stdlib.h>
//#include<time.h>
#include <iomanip>
//#include<math.h>

using namespace std;

typedef struct typ_rek
{
    int liczba;
    typ_rek *ppoprz;
};
typedef typ_rek *prek;
prek wierzch;

void nastos(prek &w,int l);
void wypisz(prek w);
void wyciongnij(prek w,int l1,int l2);
void usun(prek &w);
void UsunZeStosu(prek &w,int l);
prek wzs(prek w, int l);

main()
{
nastos(wierzch,10);
cout<<wierzch->liczba<<endl;
wypisz(wierzch);
cout<<endl<<wzs(wierzch,3)->liczba<<endl<<endl;
UsunZeStosu(wierzch,4);
wypisz(wierzch);
cout<<endl;
wyciongnij(wierzch,2,2);
wypisz(wierzch);
cout<<endl<<wierzch->liczba<<endl;
usun(wierzch);
if (wierzch==NULL)
    cout<<"spoko maroko";
else
    cout<<"mocne 3/16";
}
void nastos(prek &w,int l)
{
    prek ppom;
    if (w==NULL)
        {
            ppom=w;
            w=new typ_rek;
            w->liczba=1;
            w->ppoprz=ppom;
        }
    for (int i=w->liczba+1;i<=l;i++)
    {
        ppom=w;
        w=new typ_rek;
        w->liczba=i;
        w->ppoprz=ppom;
    }
};
void wypisz(prek w)
{
    while (w!=NULL)
    {
        cout<<w->liczba<<endl;
        w=w->ppoprz;
    }
}
void wyciongnij(prek w,int l1,int l2)
{
    prek p1;
    prek p2;
    for (int i=1;i<l1;i++)
    {
        p1=w;
        w=w->ppoprz;
    }
    for (int i=0;i<l2;i++)
    {
        p2=w;
        w=w->ppoprz;
        delete p2;
    }
    p1->ppoprz=w;
}
void usun(prek &w)
{
    prek ppom;
    while (w!=NULL)
    {
        ppom=w;
        w=w->ppoprz;
        delete ppom;
    }
};
prek wzs(prek w,int l)
{
    for (int i=1;i<l;i++)
        w=w->ppoprz;
    return w;
};
void UsunZeStosu(prek &w,int l)
{
    prek ppom;
    for (int i=0;i<l;i++)
    {
        ppom=w;
        w=w->ppoprz;
        delete ppom;
    }
};
