#include <iostream>
#include <windows.h>
#include <iomanip>
#include <ctime>

using namespace std;

void losuj(int *tablica,int rozmiar)
{
    srand(time(NULL));
    for(int i=0;i<rozmiar;i++)
    {
        tablica[i]=rand()%301-150;
    }
}
void wypisz (int *tablica,int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
        {
            cout<<setw(5)<<tablica[i];
        }
}
void min_max (int *tablica,int rozmiar)
{
    int minimum,maximum,dlugosc;
    if(tablica[0]<tablica[1]) {minimum=tablica[0];maximum=tablica[1];}
        else {minimum=tablica[1];maximum=tablica[0];}
    if(rozmiar%2==0) dlugosc=rozmiar-2; else dlugosc=rozmiar-3;
    for(int i=2;i<=dlugosc;i+=2)
    {
        if(tablica[i]<tablica[i+1])
            {
            if(tablica[i]<minimum) minimum=tablica[i];
            if(tablica[i+1]>maximum) maximum=tablica[i+1];
            }
        else
            {
            if(tablica[i]>maximum) maximum=tablica[i];
            if(tablica[i+1]<minimum) minimum=tablica[i+1];
            }
    }
    if(rozmiar%2!=0)
    {
        if(tablica[rozmiar-1]>maximum) maximum=tablica[rozmiar-1];
        if(tablica[rozmiar-1]<minimum) minimum=tablica[rozmiar-1];
    }
    cout<<endl<<"Wartosc najmniejsza: "<<setw(5)<<minimum<<endl;
    cout<<"Wartosc najwieksza: "<<setw(5)<<maximum<<endl;
}
int main()
{
    int n;
    cout << "Podaj wielkosc tablicy: " << endl;
    cin>>n;
    int *tablica = new int [n];
    losuj(tablica,n);
    wypisz(tablica,n);
    min_max(tablica,n);
    return 0;
}
