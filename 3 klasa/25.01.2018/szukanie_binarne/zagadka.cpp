#include <iostream>

using namespace std;
void wypelnienie(int *tablica,int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        tablica[i]=i;
    }
}
void szukaniebinarne(int *tablica,int lewy,int prawy)
{
    int srodek;
    char takalbonie,takalbonie2;
    while(lewy<=prawy)
    {
        srodek=(lewy+prawy)/2;
        cout<<"czy twoja liczba to: "<<srodek<<endl;
        cin>>takalbonie;
        cout<<endl;
        if(takalbonie=='t')
            {
                cout<<"Twoja liczba to: "<<srodek;
                return;
            }
        else
        {
            cout<<endl<<"Czy twoja liczba jest mniejsza od "<<srodek<<endl;
            cin>>takalbonie2;
            cout<<endl;
            if(takalbonie2=='t') prawy=srodek-1;
            else lewy=srodek+1;
        }
    }
    cout<<"Oszukujesz twojej liczby nie ma w przedziale";
}
int main()
{
    int tablica[100]={};
    int szukana;
    cout<<"Jezeli tak podaj t jezeli nie podaj n"<<endl;
    wypelnienie(tablica,100);
    szukaniebinarne(tablica,0,99);
    return 0;
}
