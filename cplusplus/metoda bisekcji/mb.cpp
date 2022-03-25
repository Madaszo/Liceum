#include <iostream>
#include <math.h>

using namespace std;
const int N=5;

double P[N+1];
double a,b,epsilon;

int calc_P(double* P, double x)
{

}

int main()
{
    cout << "podaj stopien wielomianu: " << endl;
    int n;
    cin >> n;
    for (int i=0; i<n+1; i++)
    {
        cout << "podaj wspolczynnik przy x^" << i << endl;
        cin >> P[i];
    }
    cout << "podaj lewa granice przedzialu:" << endl;
    cin >> a;
    cout << "podaj prawa granice przedzialu:" << endl;
    cin >> b;
    cout << "podaj dok³adnosæ - epsilon x:" << endl;
    cin >> epsilon;
    int mpp = math.log(epsilon);


    //






    return 0;
}
