#include <iostream>
#include <cstdio>

using namespace std;

struct dane
{
    string ulica;
    string miejscowosc;
}data;

struct uczen
{
    string nazwisko;
    string imie;
    int numer;
    string klasa;
    dane d;
}student;

void wczytaj_statyczne(uczen &student)
{
    cout<<"Podaj imie ucznia: ";
    getline(cin,student.imie);
    fflush(stdin);
    cout<<"\nPodaj Nazwisko ucznia: ";
    getline(cin,student.nazwisko);
    fflush(stdin);
    cout<<"\nPodaj klase ucznia: ";
    cin>>student.klasa;
    cout<<"\nPodaj numer ucznia: ";
    cin>>student.numer;
    cout<<"\nPodaj miejscowosc: ";
    cin>>student.d.miejscowosc;
    fflush(stdin);
    cout<<"\nPodaj ulice: ";
    getline(cin,student.d.ulica);
    fflush(stdin);
}
void wypisz_statyczne(uczen &student)
{
    cout<<"Imie: "<<student.imie;
    cout<<"\nNazwisko: "<<student.nazwisko;
    cout<<"\nKlasa: "<<student.klasa;
    cout<<"\nNumer: "<<student.numer;
    cout<<"\nMiejscowowsc: "<<student.d.miejscowosc;
    cout<<"\nUlica: "<<student.d.ulica;
}
int main()
{
    wczytaj_statyczne(student);
    wypisz_statyczne(student);
    return 0;

}
