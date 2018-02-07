#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream wej,wyj;
    int liczba;

    wej.open("dane.txt",ios::in);
    wyj.open("wynik.txt",ios::out);
    if(wej.good())
    {
        cout<<"Poprawne otwarcie"<<endl;
        while(!wej.eof())
        {
                wej>>liczba;
                cout<<liczba<<endl;
                wyj<<liczba<<endl;
        }
    }
    else cout<<"Blad Otwarcia"<<endl;
    cout<<"Koniec zadanie testowego"<<endl;
    wyj.close();
    wej.close();
    cout<<"Zadanie parzyste"<<endl;
    wej.open("dane.txt",ios::in);
    wyj.open("parzyste.txt",ios::out);
    int iloscpar=0;
    if(wej.good())
    {
        cout<<endl<<"Poprawne otwarcie"<<endl;
        while(!wej.eof())
        {
            wej>>liczba;
            if(liczba%2==0)
                {
                iloscpar++;
                cout<<"liczba: "<<liczba<<endl;
                wyj<<liczba<<" ";
                }
        }
        wyj<<endl<<"ilosc parzystych: "<<iloscpar;
    }
    else cout<<"Blad Otwarcia"<<endl;
    wyj.close();
    wej.close();
    cout<<"zadanie faktoryzacji "<<endl;
    wej.open("dane.txt",ios::in);
    wyj.open("faktoryzacja.txt",ios::out);
    if(wej.good())
    {
        cout<<"Poprawne otwarcie"<<endl;
        while(!wej.eof())
        {
            wej>>liczba;
            int czynnik=2;
            while(liczba>1)
            {
              while(liczba%czynnik==0)
              {
                  wyj<<czynnik<<" ";
                  liczba=liczba/czynnik;
              }
              czynnik++;
            }
            wyj<<endl;

        }
    }




    return 0;
}
