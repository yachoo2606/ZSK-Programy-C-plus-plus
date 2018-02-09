#include <iostream>
#include <cstdio>
#include <iomanip>

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
    cout<<"\nPodaj imie ucznia: ";
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
    cout<<setw(15)<<"\nNazwisko: "<<student.nazwisko;
    cout<<setw(15)<<"\nKlasa: "<<student.klasa;
    cout<<setw(15)<<"\nNumer: "<<student.numer;
    cout<<setw(15)<<"\nMiejscowowsc: "<<student.d.miejscowosc;
    cout<<setw(15)<<"\nUlica: "<<student.d.ulica;
}
void wczytaj_dynamicznie(uczen *student)
{
    cout<<"\nPodaj imie ucznia: ";
    getline(cin,student->imie);
    fflush(stdin);
    cout<<"\nPodaj Nazwisko ucznia: ";
    getline(cin,student->nazwisko);
    fflush(stdin);
    cout<<"\nPodaj Klase: ";
    getline(cin,student->klasa);
    fflush(stdin);
    cout<<"Podaj numer klasy: ";
    cin>>student->numer;
    fflush(stdin);
    cout<<"\nPodaj miejscowosc: ";
    getline(cin,student->d.miejscowosc);
    fflush(stdin);
    cout<<"\nPodaj ulice: ";
    getline(cin,student->d.ulica);
    fflush(stdin);
    cout<<endl;
}
void wypisz_dynamicznie(uczen *student)
{
    cout<<"\nImie ucznia: "<<student->imie;
    cout<<setw(15)<<"\nNazwisko ucznia: "<<student->nazwisko;
    cout<<setw(15)<<"\nKlasa ucznia: "<<student->klasa;
    cout<<setw(15)<<"\nNumer ucznia: "<<student->numer;
    cout<<setw(15)<<"\nMiejscowosc ucznia: "<<student->d.miejscowosc;
    cout<<setw(15)<<"\nUlica ucznia: "<<student->d.ulica;
}
int main()
{
    cout<<"Struktury Statyczne: \n";
    wczytaj_statyczne(student);
    wypisz_statyczne(student);
    cout<<"Struktury dynamiczne: \n";
    wczytaj_dynamicznie(&student);
    wypisz_dynamicznie(&student);
    return 0;
}
