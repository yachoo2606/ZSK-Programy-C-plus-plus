#include <iostream>
#include <fstream>

using namespace std;
void wypisz(int *tablica,int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
        {
            cout<<tablica[i]<<" ";
        }
}
void dotablicy(fstream &wej,int *tablica,int i)
{
    while(!wej.eof())
        {
            wej>>tablica[i];
            i++;
        }
}
void liderowanie(int *tablica,int rozmiar)
{
    int lider=tablica[0],pom=1,ilosc;
    for(int i=1;i<rozmiar;i++)
    {
        if(pom==0)
        {
           lider=tablica[i];
           pom=1;
        }
        if(tablica[i]==lider) pom++; else pom--;
    }
    if(pom==0) cout<<"Nie ma kandydata na LIDERA";
    else
    {
        ilosc=0;
        for(int j=0;j<rozmiar;j++)
        {
            if(tablica[j]==lider) ilosc++;
        }
        if(ilosc>(rozmiar/2)) cout<<"Wygral kandydat: "<<lider;else cout<<"Potrzeba drugej tury wyborow";
    }
}
int main()
{
    fstream wej;
    int i=0;
    int liczba_kandydatow,liczba_glosujacych;
    wej.open("dane.txt",ios::in);
    if(wej.good())
    {
        cout<<"Poprawne otwarcie"<<endl;
        wej>>liczba_kandydatow;
        if(liczba_kandydatow>4) cout<<"niepoprawna ilosc kandydatow"; else
        {
        wej>>liczba_glosujacych;
        cout<<"kandydaci: "<<liczba_kandydatow<<endl;
        cout<<"glosujacy: "<<liczba_glosujacych<<endl;
        int *tablica = new int [liczba_glosujacych];
        dotablicy(wej,tablica,i);
        wypisz(tablica,liczba_glosujacych);
        liderowanie(tablica,liczba_glosujacych);
        }
    }
    else cout<<endl<<"Niepoprawne otwarcie"<<endl;
    wej.close();
    return 0;
}
