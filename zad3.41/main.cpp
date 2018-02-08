#include <iostream>

using namespace std;

struct dane
{
    string ulica;
    string miejscowosc;
}data;

struct uczen
{
    string nazwisko;
    int numer;
    string klasa;
    dane d;
}student;



void wczytaj_statyczne(uczen *student)
{
    cout<<"Podaj Nazwisko ucznia: ";
    getline(cin,student.nazwisko);
    cout<<"\nPodaj klase ucznia: ";
    cin>>student.klasa;
    cout<<"\nPodaj numer ucznia: ";
    cin>>student.numer;
    cout<<"\nPodaj miejscowosc i ulice ucznia (miejscowowsc ulica)";
    getline(cin,student.d.miejscowosc);
    getline(cin,student.d.ulica);
}
int main()
{
    wczytaj_statyczne(&student);
    return 0;

}
