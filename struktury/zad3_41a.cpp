#include <iostream>
using namespace std;

struct dane
{
 char ulica[100];
 char miejscowosc[50];
};

struct uczen
{
 char nazwisko[50];
 int numer;
 char klasa[10];
 dane adres;
};

void wczytaj (uczen &U)
{
 cout<<"podaj nazwisko ucznia: ";
 cin.getline(U.nazwisko,50);
 cout<<"podaj numer ucznia: ";
 cin>>U.numer;
 fflush(stdin);
 cout<<"podaj klase: ";
 cin.getline(U.klasa,10);
 cout<<"podaj adres ucznia:"<<endl;
 cout<<"ulica - ";
 cin.getline(U.adres.ulica,100);
 cout<<"miejscowosc - ";
 cin.getline(U.adres.miejscowosc,50);
}

void wypisz (uczen U)
{
 cout<<"\ndane ucznia:"<<endl;
 cout<<U.nazwisko<<endl;
 cout<<"numer ucznia: "<<U.numer<<endl;
 cout<<"klasa "<<U.klasa<<endl;
 cout<<"adres:\n"<<U.adres.ulica<<"\n"<<U.adres.miejscowosc<<endl;
}

main()
{
 uczen U;
 wczytaj(U);
 wypisz(U);
//system("pause");
 return 0;
}
