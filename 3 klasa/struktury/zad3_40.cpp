#include <iostream>
using namespace std;

struct ksiazka
{
 char tytul[100];
 char autor[100];
 double cena;
 int naklad;
};

void wczytaj (ksiazka *K)
{
 cout<<"podaj tytul: ";
 cin.getline(K->tytul,100)     ;
 cout<<"podaj autora: ";
 cin.getline(K->autor,100);
 cout<<"podaj cene: ";
 cin>>K->cena;
 cout<<"podaj naklad: ";
 cin>>K->naklad;
}

void wypisz (ksiazka *K)
{
 cout<<"\nwczytana ksiazka to:"<<endl;
 cout<<K->autor<<endl;
 cout<<"\""<<K->tytul<<"\""<<endl;
 cout<<"cena: "<<K->cena<<endl;
 cout<<"naklad: "<<K->naklad<<endl;
}

main()
{
 ksiazka K;
 wczytaj(&K);
 wypisz(&K);
//system("pause");
 return 0;
}
