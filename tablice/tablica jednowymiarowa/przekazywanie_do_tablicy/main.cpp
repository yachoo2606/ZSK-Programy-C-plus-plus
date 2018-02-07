#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;
void losuj(int *T, int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        T[i]=rand()%11;
    }
}
void wypisz(int T[],int rozmiar)
{
    for(int j=0;j<rozmiar;j++)
    {
        cout<<"T["<<j<<"]= "<<T[j]<<endl;
    }
}
void zlicz (int *T,int rozT, int *licz, int rozl)
{
    for(int i=0;i<rozT;i++)
    {
        licz[T[i]]++;
    }
}
int main()
{
    int tablica[11]={};

    srand(time(NULL));
    losuj(tablica,15);
    wypisz(tablica,15);

    int liczniki[11]={};
    cout<<endl;
    //wypisz(liczniki,11);
    cout<<endl;
    zlicz(tablica,15,liczniki,11);
    cout<<endl;
    wypisz(liczniki,11);

    return 0;
}
