#include <math.h>
#include<iostream>
using namespace std;
const float E=0.00001;
float x1,x;
int i;
main()
{
    cout<<"wprowadz liczbe do pierwiastkowania: ";
    cin>>x;
    x1=x/2;
    while (fabs(x1-x/x1)>E)
    {
        i++;
        x1=(x1+x/x1)/2;
    }
    cout<<endl<<"Pierwiastek liczby "<<x<<" jest rowny: "<<x1<<endl;
    cout<<"liczba iteracji wynosi: "<<i<<endl;


}
