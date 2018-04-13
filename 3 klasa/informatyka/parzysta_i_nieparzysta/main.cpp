#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
    fstream wej,wyj;
    int n,liczba;
    int parzysta=0;
    int nieparzysta=0;
    int suma=0;

    wej.open("Dane.txt",ios::in);
    wyj.open("Parzyste_i_nie_parzyste.txt",ios::out);

    if(wej.good())
    {
        cout<<"Dobre otwarcie!"<<endl;
        while(!wej.eof())
        {
            wej>>liczba;
            if(liczba%2==0) parzysta++; else nieparzysta++;
        }
    }
    else cout<<"Bledne otwarcie!"<<endl;
    wyj<<"Ilosc liczb parzystch: "<<parzysta<<endl;
    wyj<<"Ilosc nieparzystych liczb: "<<nieparzysta<<endl;
    wej.close();
    wyj.close();
    return 0;
}
