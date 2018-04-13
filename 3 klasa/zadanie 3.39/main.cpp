#include <iostream>
#include <string>

using namespace std;

struct ksiazka
    {
        string tytul;
        string autor;
        double cena;
        int naklad;
    }ksiazka1;

void wczytaj(ksiazka &ksiazka1)
{
    cout<<"Podaj tytul ksiazki: ";
    getline(cin,ksiazka1.tytul);
    cout<<endl<<"Podaj autora: ";
    getline(cin,ksiazka1.autor);
    cout<<endl<<"Podaj cene ksiazki: ";
    cin>>ksiazka1.cena;
    cout<<endl<<"Podaj naklad: ";
    cin>>ksiazka1.naklad;
}
void wypisz(ksiazka &ksiazka1)
{
    cout<<" Czy szukana ksiazka to: "<<ksiazka1.tytul;
    cout<<"\n ktora napisal: "<<ksiazka1.autor;
    cout<<"\n Cena: "<< ksiazka1.cena<<"zl ";
    cout<<"\n w nakladzie: "<<ksiazka1.naklad;
}
int main()
{

    wczytaj(ksiazka1);
    wypisz(ksiazka1);


    return 0;
}
