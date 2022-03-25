#include <iostream>
#include <math.h>
using namespace std;
char ch;
float a,b,c;
float p,q;
int n;
float r(float x)
{
    return x*M_PI/180.0; 

}
void check_error(bool t)
{
    if (t)
    {
        cout << "bledne dane!" ;
        exit(0);
    }
    cin.clear();
    cin.sync();
    cin.ignore();

    return;
}
float f(float a, float b, float c, float x)
{
    return a*x*x+b*x+c;

}
int main()
{
    cout << "Wybierz funkcje:" << endl << "a) ax^2+bx+c" << endl << "b) sin(x)" << endl;
    cin >> ch;
    if (ch!='a' && ch!='b') 
    {
        cout << "Zły wybór" << endl;
        return 0;
    }
    if (ch=='a')
    {
        cout << "podaj współczynniki: " << endl << "a=";
        cin >> a;
        check_error(cin.fail());
        if (a==0)
            check_error(1);
        cout << endl << "b="; 
        cin >> b;
        check_error(cin.fail());
        cout << endl << "c="; 
        cin >> c;
        check_error(cin.fail());
        cout << endl;
    }

    cout << "podaj przedział <p,q>" << endl << "p=";
    cin >> p; 
    check_error(cin.fail());
    cout << "q=" << endl;
    cin >> q; 
    check_error(cin.fail());

    if (p>=q)
        check_error(1);
    cout << "podaj gestosc podzialu" << endl << "n=";
    cin >> n;
    check_error(cin.fail());

    float sum=0;
    float h=(q-p)/n;
    cout << "h: " << h << endl;
    if (ch=='a')
    {
        for (int i=0; i<n;i++)
        {
            sum+=(f(a,b,c,p+i*h)+f(a,b,c,p+(i+1)*h))*h/2;
        }  

        cout << "wynik z metody trapezów: " << sum << endl;
        cout << "wynik faktyczny: " << a*q*q*q/3+b*q*q/2+c*q-a*p*p*p/3-b*p*p/2-c*p;
    }
    else
    {
        for (int i=0; i<n;i++)
        {
            sum+=(sin(r(p+i*h))+sin(r(p+(i+1)*h)))*h/2;
        }
        cout << "wynik z metody trapezów: " << r(sum) << endl;
        cout << "wynik faktyczny: " << -cos(r(q))+cos(r(p));
    }
    return 0;
}
