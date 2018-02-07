#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;
void losuj (int *tablica, int rozmtab)
{
    srand(time(NULL));

    for(int i=0;i<rozmtab;i++)
    {
        tablica[i]=rand()%51;
    }
}
void wypisz(int *tablica, int rozmtab)
{
    for(int k=0;k<rozmtab;k++)
    {
        cout<<"T["<<k<<"]: "<<tablica[k]<<endl;
    }
}
void zerparzyste(int *tablica, int rozmtab)
{
    for(int k=0;k<rozmtab;k++)
    {
        if(tablica[k]%2==0) tablica[k]=0;
    }
}
void zernieparzyste(int *tablica, int rozmtab)
{
    for(int y=0;y<rozmtab;y++)
    {
        if(tablica[y]%2!=0) tablica[y]=0;
    }
}
int main()
{
    int rozmtab;
    int wybor;
    cout << "Podaj rozmiar tablicy :" << endl;
    cin>>rozmtab;
    cout<<endl;
    int *tablica = new int[rozmtab];
    losuj(tablica,rozmtab);
    cout<<endl;
    wypisz(tablica,rozmtab);
    cout<<endl;
    cout<<"Wyzerowac:"<<endl;
    cout<<"parzyste (1)"<<endl;
    cout<<"nieparzyste (2)"<<endl;
    cin>>wybor;

    switch(wybor)
    {
        case 1 :
        {
            zerparzyste(tablica,rozmtab);
        }
        case 2 :
        {
           zernieparzyste(tablica,rozmtab);
        }
    }
    cout<<endl;
    wypisz(tablica,rozmtab);

    delete []tablica;
    return 0;
}
