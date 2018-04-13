#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void faktoryzacja(int liczba,fstream&wyj)
{
    int czynnik=2;
    int tin=0;
    int pierwczyn;
    while(liczba>1)
    {
        while(liczba%czynnik==0)
        {
        wyj<<czynnik<<", ";
        liczba=liczba/czynnik;
        pierwczyn=czynnik;
        /*if(czynnik==pierwczyn)czynnik++; else */if(czynnik%2!=0)tin=tin+1;
        }
        czynnik++;
    }
    if(tin>=3) wyj<<" :Tak."; else wyj<<": Nie.";
    wyj<<endl;
}
int rewers(int liczba)
{
    int w=0;
    while(liczba>0)
    {
        w=w*10+(liczba%10);
        liczba=liczba/10;
    }
    return w;
}
int moc_liczby(int n)
{
    int moc=0;
    while(n>=10)
    {
        int iloczyn=1;
        while(n>0)
        {
            iloczyn=iloczyn*(n%10);
            n=n/10;
        }
        n=iloczyn;
        moc++;
    }
    return moc;
}
void wypisz_tablice(int *tablica,int rozmiar)
{
    for(int i=1;i<rozmiar;i++)
    {
        cout<<"T["<<i<<"]: "<<tablica[i]<<endl;
    }
}

int main()
{
    fstream wej,wyj;

    wej.open("liczby.txt",ios::in);
    wyj.open("wyniki_liczby.txt",ios::out);

    int liczba;
    if(wej.good())
    {
        cout<<"Poprawne otwarcie"<<endl;
        while(!wej.eof())
        {
                wej>>liczba;
                wyj<<setw(13)<<liczba<<": ";
                faktoryzacja(liczba,wyj);
        }
    }
    else cout<<"Blad otwarcia"<<endl;
    wej.close();
    wyj<<endl<<"Zadanie 95.2"<<endl;
    wej.open("liczby.txt",ios::in);
    if(wej.good())
    {
        cout<<"Poprawne otwarcie"<<endl;
        while(!wej.eof())
        {
                wej>>liczba;
                wyj<<setw(13)<<liczba<<" : ";
                wyj<<rewers(liczba)<<endl;
        }
    }
    wej.close();
    wyj<<endl<<"ZADANIE 95.3 :!"<<endl;

    wej.open("liczby.txt",ios::in);
    int liczba_do_mocy;
    if(wej.good())
    {
        cout<<"Poprawne otwarcie"<<endl;
        int tablica_mocy[10]={0,0,0,0,0,0,0,0,0,0};
        int najmniejsza;
        wej>>najmniejsza;
        int najwieksza=0;
        while(!wej.eof())
        {
                wej>>liczba_do_mocy;
                wyj<<liczba_do_mocy<<" : "<<moc_liczby(liczba_do_mocy)<<endl;
                tablica_mocy[moc_liczby(liczba_do_mocy)]++;
                if(moc_liczby(liczba_do_mocy)==1)
                    if(najmniejsza>liczba_do_mocy)najmniejsza=liczba_do_mocy;
                if(moc_liczby(liczba_do_mocy)==1)
                    if(najwieksza<liczba_do_mocy) najwieksza=liczba_do_mocy;


        }
         cout<<endl<<"iloœæ liczb o danej mocy !!"<<endl;
                wypisz_tablice(tablica_mocy,10);
        cout<<"Najmniejsza liczba o mocy 1 : "<<najmniejsza<<endl;
        cout<<"Najwieksza liczba o mocy 1 : "<<najwieksza;
    } else cout<<"blad otwarcia";









    return 0;
}
