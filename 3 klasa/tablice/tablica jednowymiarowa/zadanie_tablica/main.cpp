#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    int ilpow=0;
    int ilzer=0;
    int tablica[15]={};
    int suma=0;
    int najwieksza=0;
    int najliczba=0;
    int najmniejsza;
    int najmnliczba;
    srand(time(NULL));

    for(int i=0;i<15;i++)
    {
        tablica[i]=rand()%11;
    }
    cout<<"Wartoœci wylosowane: ";
    for(int k=0;k<15;k++)
    {
        cout<<tablica[k]<<" ";
    }
    cout<<endl;

    for(int j=0;j<11;j++)
    {
    for(int u=0;u<15;u++)
        {
        if(tablica[u]==j)ilpow++;
        if(tablica[u]==0)ilzer++;
        }
        if(ilpow>0) cout<<"ilosc wystapien "<<j<<": "<<ilpow<<endl;
        if(najwieksza<ilpow)
            {
                najwieksza=ilpow;
                najliczba=j;
            }
        if(najmniejsza>ilpow)
            {
                najmniejsza=ilpow;
                najmnliczba=j;
            }
        ilpow=0;
    }
    cout<<"Najczesciej powtarza sie liczba "<<najliczba<<" : "<<najwieksza<<" razy."<<endl;
    if(ilzer>0) cout<<"Nie wystepuje";else cout<<"Najrzadziej powtarza sie liczba "<<najmnliczba<<" : "<<najmniejsza<<" razy."<<endl;

    return 0;
}
