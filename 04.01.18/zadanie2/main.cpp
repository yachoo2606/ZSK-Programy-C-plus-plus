#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;
bool pierwsza(int liczba)
{
    for(int i=2;i<=sqrt(liczba);i++)
    {
        if(liczba%i==0) return false;
    }
    return true;
}
void wypisz(int *tablica, int rozmiar)
{
    for(int i=2;i<=rozmiar;i++)
    {
        cout<<setw(3)<<tablica[i];
    }
    cout<<endl;
}
void zapelnij(int *tablica, int rozmiar)
{
    for(int i=2;i<=rozmiar;i++)
    {
        tablica[i]=1;
    }
}
void sito(int *tablica,int rozmiar)
{
    int i=2;
    while(i<=sqrt(rozmiar))
    {
        int w=i*2;
        while(w<=rozmiar)
        {
            tablica[w]=0;
            w=w+i;
        }
        do
        {
            i++;
        }
        while(i<rozmiar && tablica[i]==0);
    }
}
void wypiszpierwsze(int *tablica,int rozmiar,fstream &wyj)
{
    int ilosc=0;
    for(int j=2;j<=rozmiar;j++)
    {
        if(tablica[j]==1) ilosc++;
    }
    wyj<<ilosc;
    wyj<<endl;
}
int main()
{
    int liczba;

    fstream wej,wyj;
     wej.open("dane.txt",ios::in);
     wyj.open("wynik.txt",ios::out);
    if(wej.good())
    {
        while(!wej.eof())
        {
            wej>>liczba;

            int *tablica=new int [liczba+1];
            zapelnij(tablica,liczba);
            wypisz(tablica,liczba);
            sito(tablica,liczba);
            wypisz(tablica,liczba);
            wypiszpierwsze(tablica,liczba,wyj);

            delete []tablica;
        }
    }
    return 0;
}
