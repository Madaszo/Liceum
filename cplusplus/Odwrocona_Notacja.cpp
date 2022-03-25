#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <iomanip>
#include<math.h>
#include<stdio.h>

using namespace std;

typedef struct typ_rek
{
    float liczba;
    typ_rek *ppoprz;
};
typedef typ_rek *prek;
prek w,ppom;
string s;
float a;

void nastos(prek &w,float l);
void UsunZeStosu(prek &w,int l);
float wzs(prek w, int l);
float ONP(string s);

main()
{
cout<<"podaj dzia³anie w odwróconej notacji: ";
cin>>s;
cout<<endl<<ONP(s);
}
void nastos(prek &w,float l)
{
    prek ppom;
    ppom=w;
    w=new typ_rek;
    w->liczba=l;
    w->ppoprz=ppom;
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
float wzs(prek w,int l)
{
    for (int i=1;i<l;i++)
        w=w->ppoprz;
    return w->liczba;
};
float ONP(string s)
{
    float a;
    for (int i=0;i<s.length();i++)
    {
        switch(s[i])
        {
            case '+':
                a=wzs(w,2)+wzs(w,1);
                UsunZeStosu(w,2);
                nastos(w,a);
                break;
            case '-':
                a=wzs(w,2)-wzs(w,1);
                UsunZeStosu(w,2);
                nastos(w,a);
                break;
            case '*':
                a=wzs(w,2)*wzs(w,1);
                UsunZeStosu(w,2);
                nastos(w,a);
                break;
            case '/':
                a=wzs(w,2)/wzs(w,1);
                UsunZeStosu(w,2);
                nastos(w,a);
                break;
            default:
                w=new typ_rek;
                w->ppoprz=ppom;
                w->liczba=s[i]-48;
                ppom=w;
                break;
        }
    }
return w->liczba;
};
