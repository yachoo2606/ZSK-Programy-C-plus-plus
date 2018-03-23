#include <iostream>
#include <cstdio>
using namespace std;
const int MAX=10;

struct ksiazka
{
 char tytul[100];
 char autor[100];
 double cena;
 int naklad;
};

void wczytaj (ksiazka K[], int n)
{
 for (int i=0; i<n; i++)
 {
  cout<<"ksiazka nr "<<i+1<<endl;
  cout<<"podaj tytul: ";
  cin.getline(K[i].tytul,100)     ;
  cout<<"podaj autora: ";
  cin.getline(K[i].autor,100);
  cout<<"podaj cene: ";
  cin>>K[i].cena;
  cout<<"podaj naklad: ";
  cin>>K[i].naklad;
  cout<<endl;
  fflush(stdin);
 }
}

void wypisz (ksiazka K[], int n)
{
 for (int i=0; i<n; i++)
 {
  cout<<"\nwczytana ksiazka nr "<<i+1<<":"<<endl;
  cout<<K[i].autor<<endl;
  cout<<"\""<<K[i].tytul<<"\""<<endl;
  cout<<"cena: "<<K[i].cena<<endl;
  cout<<"naklad: "<<K[i].naklad<<endl;
  cout<<endl;
 }
}

main()
{
//ksiazka K[MAX]={"tytul1","autor1",1,10,"tytul2","autor2",2,20,"tytul3","autor3",3,30};
 ksiazka K[MAX];
 int n=3;
 wczytaj(K,n);
 wypisz(K,n);
//system("pause");
 return 0;
}
