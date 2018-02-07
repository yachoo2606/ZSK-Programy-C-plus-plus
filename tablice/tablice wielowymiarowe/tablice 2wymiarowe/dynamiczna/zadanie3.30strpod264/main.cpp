#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>

using namespace std;
void losuj(double **tablica, int w,int k)
{
    srand(time(NULL));
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
            tablica[i][j]=-8.55+(double)rand()/RAND_MAX*(26+8.55);
        }
    }
}
void wypisz(double **tablica,int w,int k)
{
    for(int i=0;i<w;i++)
    {
        cout<<"Tablica["<<i<<"]: ";
        for(int j=0;j<k;j++)
        {
            cout<<tablica[i][j]<<" ";
        }
        cout<<endl;
    }
}
double suma(double **tablica,int w,int k)
{
    double sumawiersz=0;
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(i%2!=0)sumawiersz=sumawiersz+tablica[i][j];
        }
    }
    return sumawiersz;
}
void zmniejszanie (double **tablica,int w,int k)
{
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(tablica[i][j]<0) tablica[i][j]=tablica[i][j]-2;
        }
    }
}
bool wszystkomniejsze(double **tablica,int w,int k)
{
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(tablica[i][j]<10) return true; else return false;
        }
    }
}
int main()
{
    int n,m;
    do
    {
        cout << "Podaj N:" << endl;
        cin>>n;
    }
    while(n<0);
    do
    {
        cout << "Podaj M:" << endl;
        cin>>m;
    }
    while(m<0);

    double **tablica = new double*[m];
    for(int i=0;i<n;i++)
        {
          tablica[i]=new double[m];
        }
    losuj(tablica,n,m);
    wypisz(tablica,n,m);
    cout<<"Suma wierszy niearzystych: "<<suma(tablica,n,m)<<endl;
    zmniejszanie(tablica,n,m);
    wypisz(tablica,n,m);
    cout<<endl;
    cout<<endl;
    switch(wszystkomniejsze(tablica,n,m))
    {
        case false :{ cout<<"Wszystkie sa mniejsze od 10: ";return 0;}
        case true : cout<<"Wszystkie nie sa mniejsze od 10: ";
    }
    for(int i=0;i<n;i++)
    {
        delete []tablica[i];
    }
    delete []tablica;
    return 0;
}
