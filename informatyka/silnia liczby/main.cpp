#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>

using namespace std;

void losowanie(int liczba,fstream &wyj)
{
    liczba=rand()%15;
    wyj<<liczba<<endl;
}
long long int silnia(int liczba)
{
    if(liczba==0) return 1;
    return liczba*silnia(liczba-1);
}
void silnieplik(int liczba,fstream &wyj)
{
    wyj<<"Silnia liczby "<<liczba<<" wynosi: "<<silnia(liczba)<<endl;
}
int main()
{
    fstream wej,wyj;
    int liczba,n;

    wyj.open("dane.txt",ios::out);
    cout<<"Podaj ile liczb chcesz wylosowac: ";
    cin>>n;
    srand(time(NULL));
    while(n>0)
    {
        losowanie(liczba,wyj);
        n--;
    }
    wyj.close();

    wej.open("dane.txt",ios::in);
    wyj.open("silnie_liczb.txt",ios::out);

    if(wej.good())
    {
        cout<<"Poprawne wejscie!";
        while(!wej.eof())
        {
            wej>>liczba;
            silnieplik(liczba,wyj);
        }
    }
    else cout<<"bledne otwarcie!";

    return 0;
}
