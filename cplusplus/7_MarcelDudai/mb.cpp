#include <iostream>
#include <math.h>

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

double hornerek(double a[],double x, int n,int d)
{
    if (n==d)
        return a[n];
    return (hornerek(a,x,n+1,d)*x+a[n]);
};
double mb(double l,double r,double t[],double e,int n, int & c)
{
    c++;
    double s=((l+r)/2.0);
//    cout<<"l: "<<l<<endl<<"r: "<<r<<endl;
//    cout<<"s: "<<s<<endl;
//    cout<<"c: "<<c<<endl;
//    getchar();
    if (abs(hornerek(t,s,0,n))<e)
        return s;
    if (hornerek(t,s,0,n)>0)
        return mb(l,s,t,e,n,c);
    else
        return mb(s,r,t,e,n,c);
}

int main()
{
    cout << "podaj stopien wielomianu: " << endl;
    int n;
    cin >> n;
    int t[n];
    for (int i=n; i>=0; i--)
    {
        cout << "podaj wspolczynnik przy x^" << i << endl;
        cin >> P[i];
        check_error(cin.fail());
        t[i]=P[i];
    }
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
    double x = mb(l,r,P,e,n,c);
    cout<<"x="<<x<<endl;
    cout<<"ilosc iteracji: "<<c<<endl;
    cout<<"wartosc funkcji w x="<<hornerek(P,x,0,n)<<endl;


    //






    return 0;
}
