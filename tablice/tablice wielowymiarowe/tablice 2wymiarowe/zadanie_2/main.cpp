#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>

using namespace std;

void losuje(int tablica[][10],int w, int k)
{
    for(int j=0;j<w;j++)
    {
        for(int i=0;i<k;i++)
        {
            tablica[i][j]=rand()%51-25;
        }
    }
}
void wypiszewiersz(int tablica[][10],int w, int k)
{
    for(int j=0;j<w;j++)
    {
        cout<<"Wiersz["<<j<<"]: ";
        for(int i=0;i<k;i++)
        {
            if(j==10) cout<<setw(5)<<tablica[i][j] ;else cout<<setw(5)<<tablica[i][j]<<" ";
        }
        int najmniejsza=tablica[0][j];
        for(int i=0;i<w-1;i++)
            {
            if(najmniejsza>tablica[i+1][j]) najmniejsza=tablica[i+1][j];
            }
        cout<<": Najmniejsza wartosc wiersza: "<<najmniejsza;
        cout<<endl;
    }
}
void wypisaniekolumnami(int tablica[][10],int w,int k)
{
   cout<<"Wypisanie Kolumnami";
    cout<<endl;
    for(int i=0;i<10;i++)
    {
            cout<<"kolumna["<<i<<"]:";

            for(int j=0;j<10;j++)
            {
                if(j==10) cout<<setw(5)<<tablica[i][j];else cout<<setw(5)<<tablica[i][j]<<" ";

            }
            cout<<endl;
    }
    for(int j=0;j<10;j++)
    {
        int najmniejsza1=tablica[0][j];
        for(int i=0;i<10;i++)
        {
            if(najmniejsza1>tablica[i+1][j]) najmniejsza1=tablica[i+1][j];
        }
        cout<<": Najmniejsza wartosc kolumny: "<<najmniejsza1;
        cout<<endl;
    }
}
void zamianakolumn(int tablica[][10],int w, int k)
{
  cout<<endl;
    for(int i=0;i<10;i++)
    {

        for(int j=0;j<10;j++)
        {
           cout<<setw(3)<<tablica[j][i]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for(int i=0;i<w;i++)
        {
            for(int j=0;j<k-1;j++)
                {
                    swap(tablica[i][j],tablica[i][j+1]);
                }
        }
    for(int i=0;i<10;i++)
    {

        for(int j=0;j<10;j++)
        {
           cout<<setw(3)<<tablica[j][i]<< " ";
        }
        cout<<endl;
    }


}
int main()
{
    int tablica[10][10];
    cout<<"Losuje";
    cout<<endl;
    srand(time(NULL));
    losuje(tablica,10,10);
    cout<<"Wyswietlanie wierszami: ";
    cout<<endl;
    wypiszewiersz(tablica,10,10);
    cout<<endl;
    wypisaniekolumnami(tablica,10,10);
    zamianakolumn(tablica,10,10);
    return 0;
}
