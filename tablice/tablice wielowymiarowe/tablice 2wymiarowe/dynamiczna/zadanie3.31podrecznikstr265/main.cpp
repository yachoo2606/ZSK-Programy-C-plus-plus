#include <iostream>

using namespace std;

void wypisz(int **tablica,int wiersze,int kolumny)
{
    for(int i=0;i<wiersze;i++)
    {
        cout<<"Tablica["<<i<<"]: ";
        for(int j=0;j<kolumny;j++)
        {
            cout<<tablica[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int tablica[4][2]={{1,2},{3,4},{5,6},{7,8}};
    wypisz(tablica,4,2);

    return 0;
}
