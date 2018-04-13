#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int znaki(char znak)
{
    switch(znak)
    {
        case 'I' : return 1 ;break;
        case 'V' : return 5 ;break;
        case 'X' : return 10 ;break;
        case 'L' : return 50 ;break;
        case 'C' : return 100 ;break;
        case 'D' : return 500 ;break;
        case 'M' : return 1000 ;break;
    }
}



int zliczanie(string liczba,int n)
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        if(znaki(liczba[i])<znaki(liczba[i+1])) suma=suma-znaki(liczba[i]);else
        suma=suma+znaki(liczba[i]);
    }
    return suma;
}

int main()
{
    fstream wej,wyj;
    string liczba;
    int n;

    wej.open("dane.txt",ios::in);
    wyj.open("wynik.txt",ios::out);

    if(wej.good())
    {
        cout<<"Poprawne otwarcie\n\n";
        while(!wej.eof())
        {
            wej>>liczba;
            n=liczba.length();
            wyj<<"Liczba: "<<liczba<<" wartosc: "<<zliczanie(liczba,n)<<"\n";
        }
    }
    return 0;
}
