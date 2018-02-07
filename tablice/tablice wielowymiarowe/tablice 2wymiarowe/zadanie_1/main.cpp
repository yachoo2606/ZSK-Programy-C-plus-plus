#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>

using namespace std;

int main()
{
    int tablica[10][10];
    cout<<"Losuje";
    cout<<endl;
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            tablica[i][j]=rand()%51-25;
        }
    }
    cout<<"Wylosowalem i wypisze";
    cin.get();
    cout<<endl;

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<setw(5)<<tablica[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
