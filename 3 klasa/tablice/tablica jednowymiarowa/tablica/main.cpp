#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
    int tablica [10];
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        tablica[i]=(rand()%101)-50;


    }
    for(int j=0;j<10;j++)
    {
        cout<<"T["<<j<<"]="<<tablica[j]<<endl;
    }
    double srednia=0;
    for(int k=0;k<10;k++)
    {
        srednia=srednia+tablica[k];
    }
    cout<<endl<<"Wynik sumy: "<<srednia;
    cout<<endl<<"Srednica wynosi: "<<srednia/10<<endl;


    for(int u=0;u<10;u++)
    {
        if(u%2!=0)tablica[u]=0;
    }
    for(int t=0;t<10;t++)
    {
        cout<<"T["<<t<<"]="<<tablica[t]<<endl;
    }
    int najmniejsze=tablica[0];
    for(int r=1;r<10;r++)
    {
            if(najmniejsze>tablica[r])najmniejsze=tablica[r];
    }
    cout<<"najmniejsza: "<<najmniejsze;
    return 0;
}
