#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>

using namespace std;

void doskonala(int liczba, fstream &wyj)
{
    int suma_dziel=0;
    for(int i=1;i<=(liczba/2);i++)
    {
        if(liczba%i==0) suma_dziel=suma_dziel+i;
    }
    if(liczba==suma_dziel) wyj<<"liczba "<<liczba<<" : Jest doskonala."<<endl;
        else wyj<<"liczba "<<liczba<<" : Nie jest doskonala."<<endl;
}

int main()
{
    fstream wej,wyj;
    int liczba;

    wej.open("dane.txt",ios::in);
    wyj.open("doskonale.txt",ios::out);

    if(wyj.good())
    {
        cout<<"Poprawne otwracie!";
        while(!wej.eof())
        {
            wej>>liczba;
            doskonala(liczba,wyj);

        }
    }
    else cout<<"Bledne otwarcie!";
    wej.close();
    wyj.close();
    return 0;
}
