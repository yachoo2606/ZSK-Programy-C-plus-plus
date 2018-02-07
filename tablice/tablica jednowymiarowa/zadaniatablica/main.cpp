#include <iostream>
#include <string>
using namespace std;
void wpisz (int *tablicastatyczna,int rozmiar)
{

    for(int i=0;i<rozmiar;i++)
    {
        tablicastatyczna[i]=i;
    }
}
void wypisz (int *tablica, int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        cout<<"T["<<i<<"]: "<<tablica[i]<<" , ";
    }
}
void wypiszodwr(int *tablica,int rozmiar)
{
    rozmiar=rozmiar-1;
    while(rozmiar>=0)
    {
        cout<<"T["<<rozmiar<<"]: "<<tablica[rozmiar]<<" , ";
        rozmiar=rozmiar-1;
    }
}
void zeruj (int *tablica, int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        tablica[i]=0;
    }
}
int main()
{
    int tablica_statyczna[10]={};
    int rozmiartabdyn;
    cout<<"Nasza tablica statyczna posiada 10 elementow i jest teraz pusta: "<<endl;
    cin.get();
    wypisz(tablica_statyczna,10);
    cout<<endl;
    cout<<"Teraz zrobie funkcje ktora wpisze do niej liczby od 0 do 9 ;)";
    cin.get();
    wpisz(tablica_statyczna,10);
    cout<<"A teraz ja wypisze"<<endl;
    wypisz(tablica_statyczna,10);
    cout<<endl;
    cout<<"A teraz wypisze odwrotnie"<<endl;
    cin.get();
    wypiszodwr(tablica_statyczna,10);
    cout<<endl;
    cout<<"Teraz zaczynamy tablice dynamiczne: "<<endl;
    cin.get();
    cout<<"Podaj rozmiar tablicy jaki chcesz uzyskac: ";
    cin>>rozmiartabdyn;

    int *tablica_dynamiczna = new int[rozmiartabdyn];
    zeruj(tablica_dynamiczna,rozmiartabdyn);
    cout<<"Wypisze ci teraz tablice dynamiczna ktora zrobiles: "<<endl;
    cin.get();
    wypisz(tablica_dynamiczna,rozmiartabdyn);
    cout<<endl;
    cout<<"Teraz zapelnie tablice dynamiczna."<<endl;
    cin.get();
    wpisz(tablica_dynamiczna,rozmiartabdyn);
    cout<<"Wypisze ci tablice dynamiczna ktora zostala zapelniona";
    cout<<endl;
    wypisz(tablica_dynamiczna,rozmiartabdyn);
    cout<<endl;
    cout<<"a teraz odwrotnie";
    cout<<endl;
    cin.get();
    wypiszodwr(tablica_dynamiczna,rozmiartabdyn);
    cin.get();

    delete []tablica_dynamiczna;
    return 0;
}
