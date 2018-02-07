#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;
void losuje(int *tablica,int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        tablica[i]=rand()%2;
    }
}
void wypisz(int *tablica,int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
       cout<<tablica[i]<<" ";
    }
}
void liderowanie(int *tablica,int rozmiar)
{
    int pom=1;
   int ilosc;
   int lider=tablica[0];
    for(int i=1;i<8;i++)
   {
       if(pom==0)
       {
            lider=tablica[i];
            pom=1;
       }
       if(tablica[i]==lider)
        {
            pom++;
        }
        else pom--;
   }
   if(pom==0) cout<<"W zbiorze nie ma kandydata na lidera";
   else
    {
    ilosc=0;
    for(int j=0;j<rozmiar;j++)
    {
        if(tablica[j]==lider) ilosc++;
    }
    if(ilosc>(rozmiar/2)) cout<<endl<<"wynik: "<<lider; else cout<<endl<<"W zbiorze nie ma lidera";
   }
}
int main()
{
   int n;
   cout<<"Podaj rozmiar tablicy: ";
   cin>>n;
   int *tablica = new int [n];
   srand(time(NULL));
   losuje(tablica,n);
   wypisz(tablica,n);
    liderowanie(tablica,n);
    return 0;
}
