#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;
void losowanie(int *tablica,int wymiar)
{
    for(int i=0;i<wymiar;i++)
    {
      tablica[i]=rand()%20+20;
    }
}
void wypisanie(int *tablica,int wymiar)
{
    for(int i=0;i<wymiar;i++)
    {
        cout<<"Tab["<<i<<"]="<<tablica[i]<<endl;
    }
}
void dzielniki(int *tablica,int wymiar)
{
    for(int i=0;i<wymiar;i++)
    {
        cout<<"Tab["<<i<<"]="<<tablica[i]<<" : ";
        for(int d=1;d<=tablica[i];d++)
        {
            if(tablica[i]%d==0) cout<<d<<" ";
        }
        cout<<endl;
    }
}
void wypiszwiel(int **tablica,int wymiar,int iloscdziel)
{
    for(int k=0;k<wymiar;k++)
    {
        cout<<"Tab["<<k<<"]: ";
        for(int g=0;g<iloscdziel;g++)
        {
            cout<<tablica[k][g]<<" ";
        }
        cout<<endl;
    }
}
void zerowanie(int **tablica,int wymiar,int iloscdziel)
{
    for(int w=0;w<wymiar;w++)
    {
        for(int t=0;t<iloscdziel;t++)
        {
            tablica[w][t]=0;
        }
    }
}
void dzielniki1(int *tablica,int wymiar)
{
    for(int i=0;i<wymiar;i++)
    { int iloscdziel=0;
        cout<<"Tab["<<i<<"]="<<tablica[i]<<" : ";
        cout<<endl;
        for(int d=1;d<=tablica[i];d++)
        {
            if(tablica[i]%d==0) iloscdziel++;
        }
        cout<<"Ilosc dizelnikow: "<<iloscdziel;
        int **tablica2 = new int *[wymiar];
        for(int z=0;z<wymiar;z++)
        {
            tablica2[z]= new int [iloscdziel];
        }
        cout<<endl;
        zerowanie(tablica2,wymiar,iloscdziel);
        wypiszwiel(tablica2,wymiar,iloscdziel);
        cout<<endl;

    }
}

int main()
{
    srand(time(NULL));
    int wymiar;
    do
    {
        cout<<"Podaj rozmiar tablicy jednowymiarowej: ";
        cin>>wymiar;
    }
    while(wymiar<0);

    int *tablica = new int [wymiar];
    losowanie(tablica,wymiar);
    wypisanie(tablica,wymiar);
    cout<<endl;
    dzielniki(tablica,wymiar);
    cout<<endl;
    dzielniki1(tablica,wymiar);

    delete []tablica;
    return 0;
}
