#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int ilosc=0;
    fstream wej,wyj;
    string liczba_stringiem;

    wyj.open("zadanie4e.txt",ios::out);
    wej.open("binarne.txt",ios::in);

    if(wej.good())
    {
        cout<<"Poprawne otwarcie!\n\n";
        while(!wej.eof())
        {
            wej>>liczba_stringiem;
            string a=liczba_stringiem.substr(0,liczba_stringiem.size()/2);
            string b=liczba_stringiem.substr(liczba_stringiem.size()/2,liczba_stringiem.size());
            if(a==b)
            {
                ilosc++;
            }
        }
        wyj<<ilosc;
    }
    wej.close();
    wej.open("binarne.txt",ios::in);

    if(wej.good())
    {
        cout<<"Poprawne otwarcie!\n";
        string najdluzszy;
        int dlugosc;
        wej>>najdluzszy;
        dlugosc=najdluzszy.size();
        while(!wej.eof())
        {
            wej>>liczba_stringiem;
            string a=liczba_stringiem.substr(0,liczba_stringiem.size()/2);
            string b=liczba_stringiem.substr(liczba_stringiem.size()/2,liczba_stringiem.size());
            if(a==b)
            {
                if(dlugosc<liczba_stringiem.size())
                {
                    najdluzszy=liczba_stringiem;
                    dlugosc=liczba_stringiem.size();
                }
            }
        }
        wyj<<"\n\nNajdluzszy napis dwucykliczny: "<<najdluzszy;
        wyj<<"\nO dlugosci: "<<dlugosc;
    }
    return 0;
}
