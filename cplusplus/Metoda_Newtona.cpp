#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
const int N=5;

double P[N+1];
double l,r,e;

void check_error(bool t)
{
    if (t)
    {
        cout << "bledne dane!" ;
        exit(0);
    }
//    cin.clear();
//    cin.sync();
//    cin.ignore();

    return;
}
void pochodna(double t[],int n)
{
    cout<<"pochodna: "<<endl;
    for (int i=0;i<n;i++)
    {
        t[i]=t[i+1]*(i+1);
        cout<<t[i]<<"*x^"<<i<<" ";
    }
    cout<<endl;
    t[n]=0;
    return;
};
double hornerek(double a[],double x, int n,int d)
{
    if (n==d)
        return a[n];
    return (hornerek(a,x,n+1,d)*x+a[n]);
};
double mn(double t1[],double t2[],double e,int & c, int n,double l,double r)
{
    c++;
    cout<<"l: "<<l<<endl<<"r: "<<r<<endl;
    cout<<"c: "<<c<<endl;
//    getchar();
    if (abs(hornerek(t1,l,0,n))<e)
        return l;
    if (abs(hornerek(t1,r,0,n))<e)
        return r;
    else
    {
        double z=hornerek(t2,l,0,n-1);
        if (!z)
        {
            z=hornerek(t2,r,0,n-1);
            r=r-hornerek(t1,r,0,n)/z;
        }
        else
            l=l-hornerek(t1,l,0,n)/z;
        return mn(t1,t2,e,c,n,l,r);
    }

}
int main()
{
    cout.precision(10);
    cout << "podaj stopien wielomianu: " << endl;
    int n;
    cin >> n;
    double t[n];
    for (int i=n; i>=0; i--)
    {
        cout << "podaj wspolczynnik przy x^" << i << endl;
        cin >> P[i];
        check_error(cin.fail());
    }
    for (int i=n; i>=0; i--)
    {
        t[i]=P[i];
        cout<<t[i]<<"*x^"<<i<<" ";
    }
    cout<<endl;
    pochodna(t,n);
    cout<<"cos"<<endl;
    cout << "podaj lewa granice przedzialu:" << endl;
    cin >> l;
    check_error(cin.fail());
    cout << "podaj prawa granice przedzialu:" << endl;
    cin >> r;
    check_error(cin.fail());
    if ((l>=r) || (hornerek(P,l,0,n)>0) || (hornerek(P,r,0,n)<0))
    {
        cout << "bledne dane!" ;
        exit(0);
    }
    cout << "podaj dok³adnosæ - epsilon x:" << endl;
    cin >> e;
    check_error(cin.fail());
    int c=0;
//    cout<<"l: "<<l<<endl<<"r: "<<r<<endl;
//    cout<<"c: "<<c<<endl;
    getchar();
    double x = mn(P,t,e,c,n,l,r);
    cout<<"x="<<x<<endl;
    cout<<"ilosc iteracji: "<<c<<endl;
    cout<<"wartosc funkcji w x="<<hornerek(P,x,0,n)<<endl;


    //






    return 0;
}

