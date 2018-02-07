#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>

using namespace std;

int main()
{
    int wiersze,kolumny;
    cout<<"Podaj ilosc wierszy: ";
    cin>>wiersze;
    cout<<endl;
    cout<<"Podaj ilosc kolumn: ";
    cin>>kolumny;
    cout<<endl;
    int tablica[wiersze][kolumny];
    srand(time(NULL));
    for(int j=0;j<wiersze;j++)
    {
        for(int i=0;i<kolumny;i++)
        {
            tablica[i][j]=rand()%51-25;
        }
    }
    cin.get();
    cout<<endl;

    for(int j=0;j<wiersze;j++)
    {
        cout<<"Wiersz["<<j<<"]: ";
        for(int i=0;i<kolumny;i++)
        {
            if(j==10) cout<<setw(5)<<tablica[i][j] ;else cout<<setw(5)<<tablica[i][j]<<" ";
        }
        int najmniejsza=tablica[0][j];
        for(int i=0;i<kolumny;i++)
            {
            if(najmniejsza>tablica[i+1][j]) najmniejsza=tablica[i+1][j];
            }
        cout<<": Najmniejsza wartosc wiersza: "<<najmniejsza;
        cout<<endl;
    }




    return 0;
}
