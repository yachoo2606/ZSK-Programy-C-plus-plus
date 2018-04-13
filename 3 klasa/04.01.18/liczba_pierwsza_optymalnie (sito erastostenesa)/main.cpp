#include <iostream>
#include <cmath>
#include <iomanip>

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
void wypiszpierwsze(int *tablica,int rozmiar)
{
    for(int j=2;j<=rozmiar;j++)
    {
        if(tablica[j]==1) cout<<setw(3)<<j<<" : ";
    }
}
int main()
{
    int liczba;
    cout << "Podaj koniec zakres" << endl;
    cin>>liczba;
    //cout<<pierwsza(liczba);
    //Nie optymalny algorytm
    /*for(int i=2;i<=liczba;i++)
    {
        if(pierwsza(i)==1) cout<<endl<<i<<endl;
    }*/
    int *tablica=new int [liczba+1];
    zapelnij(tablica,liczba);
    wypisz(tablica,liczba);
    sito(tablica,liczba);
    wypisz(tablica,liczba);
    wypiszpierwsze(tablica,liczba);

    delete []tablica;
    return 0;
}
