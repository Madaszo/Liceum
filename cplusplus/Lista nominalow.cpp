#include <iostream>
using namespace std;

const int t[9]={500,200,100,50,20,10,5,2,1};

void lista(const int t[],int l);
int listanominalow(const int t[],int l);
int listaroznych(const int t[],int l);

main()
{
    int s;
    cout<<"podaj kwote do wydania: ";
    cin>>s;
    lista(t,s);
    cout<<endl<<"ilosc nominalow: "<<listanominalow(t,s)<<endl;
    cout<<"ilosc roznych nominalow: "<<listaroznych(t,s);
}
void lista(const int t[],int l)
{
    for(int i=0;l;i++)
    {
        while (l>=t[i])
        {
            cout<<t[i]<<" ";
            l-=t[i];
        }
    }
};
int listanominalow(const int t[],int l)
{
    int s=0;
    for (int i=0;l;i++)
    {
            s+=l/t[i];
            l%=t[i];
    }
    return s;
};
int listaroznych(const int t[],int l)
{
    int s=0;
    for(int i=0;l;i++)
    {
        if (l>=t[i])
        {
            s++;
            l%=t[i];
        }
    }
    return s;
};
