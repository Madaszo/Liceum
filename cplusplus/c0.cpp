#include <iostream>;

using namespace std;

const int UCZNIOW = 3;

typedef struct {
    string imie;
    string nazwisko;
    int nr_buta;
    } typ_osoba;
typedef typ_osoba typ_klasa[30];

typ_klasa klasa;
main()
{
for (int i=0; i<UCZNIOW; i++)
    {
    cout<<"podaj dane "<<(i+1)<<" osoby:"<<endl<<"imie: ";
    getline(cin,klasa[i].imie);
    cout<<"nazwisko: ";
    getline(cin,klasa[i].nazwisko);
    cout<<"nr buta: ";
    cin>>klasa[i].nr_buta;
    cin.clear();
    cin.sync();
    cout<<endl;
    }
for (int i=0;i,UCZNIOW; i++)
{
    cout<<"oto dane "<<i<<" osoby:"<<endl;
    cout<<"imie: "<<klasa[i].imie<<endl;
    cout<<"nazwisko: "<<klasa[i].nazwisko<<endl;
    cout<<"nr buta: "<<klasa[i].nr_buta<<endl<<endl;

}



}
