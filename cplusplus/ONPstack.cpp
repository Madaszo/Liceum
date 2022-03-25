#include <stack>
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <iomanip>
#include<math.h>
#include<stdio.h>
using namespace std;

float onp(string s);

main()
{
string s;
cout<<"podaj dzialanie w odwroconej notacji: ";
cin>>s;
cout<<onp(s);
};
float onp(string s)
{
    stack <float> stos;
    float a,b,c;
    for(int i=0; i<s.length();i++)
    {
        switch(s[i])
        {
            case '+':
                a=stos.top();
                stos.pop();
                b=stos.top();
                stos.pop();
                stos.push(b+a);
                break;
            case '-':
                a=stos.top();
                stos.pop();
                b=stos.top();
                stos.pop();
                stos.push(b-a);
                break;
            case '*':
                a=stos.top();
                stos.pop();
                b=stos.top();
                stos.pop();
                stos.push(b*a);
                break;
            case '/':
                a=stos.top();
                stos.pop();
                b=stos.top();
                stos.pop();
                stos.push(b/a);
                break;
            default:
                stos.push(s[i]-48);
                break;
        }
    }
return stos.top();
};

