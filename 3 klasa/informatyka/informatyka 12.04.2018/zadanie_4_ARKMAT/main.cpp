#include <iostream>
#include <fstream>

using namespace std;

void sprawdzanie4_1(string liczba,int &iloscliczb)
{
    int ilosczer=0;
    int iloscjedynek=0;
    int n=liczba.size();
    for(int i=0;i<n;i++)
    {
        if(liczba[i]=='1') iloscjedynek++;
        if(liczba[i]=='0') ilosczer++;
    }
    if(ilosczer>iloscjedynek) iloscliczb++;
}
void sprawdzanie4_1_przez2 (string liczba,int &iloscpodzelprzezdwa)
{
    int n=liczba.size();
    if(liczba[n-1]=='0')iloscpodzelprzezdwa++;
}
void sprawdzanie4_1_przez8 (string liczba,int &iloscpodzeleprzez8)
{
    int n=liczba.size();
    if(liczba[n-1]=='0' && liczba[n-2]=='0' && liczba[n-3]=='0') iloscpodzeleprzez8++;
}

int Horner(string liczba)
{
    int p=2;
    int n=liczba.size();
    int w=(int)liczba[0]-48;
    for (int i=1;i<n;i++)
    {
        w=w*p+(int)liczba[i]-48;
    }
    return w;
}


int main()
{
    fstream wej,wyj;
    string liczba;
    int iloscliczb=0,iloscpodzelprzezdwa=0,iloscpodzeleprzez8=0,ilosclinijek=0;
    wej.open("liczby.txt",ios::in);
    wyj.open("wynik4.txt",ios::out);

    if(wej.good())
    {
        cout<<"Poprawne otwarcie!\n\n";
        while(!wej.eof())
        {
            wej>>liczba;
            sprawdzanie4_1(liczba,iloscliczb);
        }
        wyj<<"Wynik zad 4.1: "<<iloscliczb;
    }
    wej.close();
    wej.open("liczby.txt",ios::in);

    if(wej.good())
    {
        cout<<"Poprawne otwarcie!\n\n";
        while(!wej.eof())
        {
            wej>>liczba;
            sprawdzanie4_1_przez2(liczba,iloscpodzelprzezdwa);
        }
        wyj<<"\n\nWynik zad 4.2 przez 2: "<<iloscpodzelprzezdwa;
    }
    wej.close();
    wej.open("liczby.txt",ios::in);

    if(wej.good())
    {
        cout<<"Poprawne otwarcie!\n\n";
        while(!wej.eof())
        {
            wej>>liczba;
            sprawdzanie4_1_przez8(liczba,iloscpodzeleprzez8);
        }
        wyj<<"\n\nWynik zad 4.2 przez 8: "<<iloscpodzeleprzez8;
    }

    wej.close();
    wej.open("liczby.txt",ios::in);

    if(wej.good())
    {
        cout<<"Poprawne otwarcie!\n\n";
        while(!wej.eof())
        {
            wej>>liczba;
            ilosclinijek++;
        }
    }
    wej.close();
    wej.open("liczby.txt",ios::in);

    if(wej.good())
    {
        int najmniejsza_liczba,najwieksza_liczba;
        int indeks_najmniejszy=1,indeks_najwiekszy=1,aktualny_indeks=1;
        string najmniejsza_binarnie,najwieksza_binarnie;
            wej>>liczba;
            najmniejsza_liczba=Horner(liczba);
            najwieksza_liczba=Horner(liczba);
        cout<<"\n\npoprawne otwarcie!\n";
        while(!wej.eof())
        {
            wej>>liczba;
            aktualny_indeks++;
            if(najmniejsza_liczba>Horner(liczba))
            {
                    indeks_najmniejszy=aktualny_indeks;
                    najmniejsza_liczba=Horner(liczba);
                    najmniejsza_binarnie=liczba;
            }
            if(najwieksza_liczba<Horner(liczba))
            {
                indeks_najwiekszy=aktualny_indeks;
                najwieksza_liczba=Horner(liczba);
                najmniejsza_binarnie=liczba;
            }
        }
         wyj<<"\n\n\nZadanie 4.3\n";
         wyj<<"\nNajmniejsza liczba jest na: "<<indeks_najmniejszy;
         wyj<<"\nNajwieksza liczba jest na: "<<indeks_najwiekszy;
         wyj<<"\n=========================\nnie do koñca dzia³a 4.3\n=========================\n";
    }




    return 0;
}
