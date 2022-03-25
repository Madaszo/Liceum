#include <iostream>
//#include<stdlib.h>
//#include<time.h>
//#include <iomanip>
//#include<math.h>

using namespace std;

main()
{
    cout<<"podaj rozmiar tablicy: ";
    int r;
    cin>>r;
    int*wsk=new int[r];
    for(int i=0;i<=r-1;i++)
        wsk[i]=(i+1)*10;
    cout<<endl<<wsk<<endl<<wsk[r-1]<<endl<<wsk[0]<<endl<<wsk[1]<<endl;
    delete []wsk;
    cout<<wsk<<endl<<wsk[0]<<endl<<wsk[1];
}
