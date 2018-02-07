#include <iostream>
using namespace std;
void wpisz(int tablicastat,int rozmiar)
{

    for(int i=0;i<rozmiar;i++)
    {
        cout<<"Podaj "<<i<<" pozycje tablicy"<<endl;
        cin>>tablicastat[i];
    }
}
void wypisz(int *tablicastat,int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        cout<<"T["<<i<<"]: "<<tablicastat[i]<<" ";
    }
}
void znajdznajmniejsze(int *tablicastat,int rozmiar)
{
    int najmniejsza=tablicastat[0];
    for(int i=0;i<rozmiar;i++)
    {
        if(najmniejsza>tablicastat[i+1]) najmniejsza=tablicastat[i+1];
    }
    cout<<endl;
    cout<<"Najmniejsza wartosc: "<<najmniejsza;
}
int main()
{
    int tablica_statyczna[5]={};
    cout << "Podaj wartoœci talicy statycznej: " << endl;
    wpisz(tablica_statyczna,5);
    wypisz(tablica_statyczna,5);
    cout<<endl;
    znajdznajmniejsze(tablica_statyczna,5);
    cout<<endl;
    cout<<endl;
    cout<<"Teraz bêdzie tablica dynamiczna";
    cout<<endl;
    cout<<endl;

    int rozmtab;
    cout<<"Podaj rozmiar tablicy dynamicznej ";
    cin>>rozmtab;
    int *tablica_dynamiczna = new int [rozmtab];
    wpisz(tablica_dynamiczna,rozmtab);
    wypisz(tablica_dynamiczna,rozmtab);
    cout<<endl;
    znajdznajmniejsze(tablica_dynamiczna,rozmtab);


    delete []tablica_dynamiczna;
    return 0;
}
