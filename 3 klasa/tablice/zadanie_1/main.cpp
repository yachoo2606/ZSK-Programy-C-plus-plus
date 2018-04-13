#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

void zeruj (int *T, int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        T[i]=0;
    }
}
void wypisz(int *T, int r)
{
    for(int j=0;j<r;j++)
    {
        cout<<"T["<<j<<"]:"<<T[j]<<endl;
    }
}
void losuj(int *T,int r)
{
    srand(time(NULL));
    for(int k=0;k<r;k++)
    {
        T[k]=rand()%101-50;
    }
}
int main()
{
    int r;
    cout << "Podaj rozmiar tablicy: " << endl;
    cin>>r;
    int *T= new int[r];
    zeruj(T,r);
    cout<<endl;
    wypisz(T,r);
    cout<<endl;
    losuj(T,r);
    wypisz(T,r);

    delete []T;



    return 0;
}
