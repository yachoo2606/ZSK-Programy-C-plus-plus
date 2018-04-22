#include <iostream>
#include <fstream>

using namespace std;

int horner(string liczba,int p)
{
    int n=liczba.size();
    int w=(int)liczba[0]-48;
    for(int i=1;i<n;i++)
    {
        w=w*p+liczba[i]-48;
    }
    return w;
}
string liczba_na_osemkowy(int liczba)
{
    string liczba_osemkowa="";
    while(liczba>0)
    {
        liczba_osemkowa=(char)(liczba%8+48)+liczba_osemkowa;
        liczba/=8;
    }
    return liczba_osemkowa;
}
int main()
{
    fstream wej1,wej2,wyj;
    int najmniejsza,najwieksza,liczby_rowne=0,liczba_dziesietna,liczby_wieksze_w_pierwszym_pliku=0,ilosc_6=0;
    string liczba,najmniejsza_osemkowo,najwieksza_osemkowo,liczba_osemkowa,liczba_dzis_na_osemkowa;
    wej1.open("liczby1.txt",ios::in);
    wyj.open("wyniki.txt",ios::out);

    if(wej1.good())
    {
        cout<<"Poprawne otwearcie!\n";
            wej1>>liczba;
            najmniejsza=horner(liczba,8);
            najwieksza=horner(liczba,8);
        while(!wej1.eof())
        {
            wej1>>liczba;

            if(horner(liczba,8)<najmniejsza)
            {
                najmniejsza=horner(liczba,8);
                najmniejsza_osemkowo=liczba;
            }
            if(horner(liczba,8)>najwieksza)
            {
                najwieksza=horner(liczba,8);
                najwieksza_osemkowo=liczba;
            }
        }
        wyj<<"\nZadanie 1\nNajwieksza jest liczba \(zapisana osemkowo\): "<<najwieksza_osemkowo;
        wyj<<"\n\nNajmniejsza jest liczba \(zapisana osemkowo\): "<<najmniejsza_osemkowo;
    }
    wej1.close();
    wej1.open("liczby1.txt",ios::in);
    wej2.open("liczby2.txt",ios::in);

    if(wej1.good())
    {
        cout<<"Poprawne otwarcie wej1!!\n";
        if(wej2.good())
        {
            cout<<"Poprawne otwarcie wej2!!\n";

            while(!wej1.eof())
            {
                wej1>>liczba_osemkowa;
                wej2>>liczba_dziesietna;
                    if((horner(liczba_osemkowa,8))== liczba_dziesietna)
                    {
                        liczby_rowne++;
                    }
            }
            wyj<<"\nZadanie 2\nliczby o tych samych wartosciach: "<<liczby_rowne;
        }
    }

    wej1.close();
    wej2.close();
    wej1.open("liczby1.txt",ios::in);
    wej2.open("liczby2.txt",ios::in);

    if(wej1.good())
    {
        cout<<"Poprawne otwarcie wej1!!\n";
        if(wej2.good())
        {
            cout<<"Poprawne otwarcie wej2!!\n";

            while(!wej1.eof())
            {
                wej1>>liczba_osemkowa;
                wej2>>liczba_dziesietna;
                    if((horner(liczba_osemkowa,8))> liczba_dziesietna)
                    {
                        liczby_wieksze_w_pierwszym_pliku++;
                    }
            }
            wyj<<"\n\nliczb wiekszych w pierwszymm pliku jest: "<<liczby_wieksze_w_pierwszym_pliku;
        }
    }

    wej1.close();
    wej2.close();

    wej2.open("liczby2.txt",ios::in);

    if(wej2.good())
    {
        cout<<"Poprawne otwarcie wej2!\n";
        while(!wej2.eof())
        {
            wej2>>liczba_dziesietna;

            while(liczba_dziesietna>0)
            {
                if(liczba_dziesietna%10==6)
                {
                    ilosc_6++;
                }
                liczba_dziesietna/=10;
            }
        }
        wyj<<"\n\nZadanie 3\nIlosc 6 w dzesietnych liczbach: "<<ilosc_6;
    }
    ilosc_6=0;
    wej2.close();
    wej2.open("liczby2.txt",ios::in);

    if(wej2.good())
    {
        cout<<"poprawne otwarcie wej2!\n";

        while(wej2.good())
        {
            wej2>>liczba_dziesietna;
            liczba_dzis_na_osemkowa=liczba_na_osemkowy(liczba_dziesietna);

            for(int i=0;i<liczba_dzis_na_osemkowa.size();i++)
            {
                if(liczba_dzis_na_osemkowa[i]=='6') ilosc_6++;
            }
        }
    }
    wyj<<"\n\nIlosc 6 w osemkowych liczbach: "<<ilosc_6;
    return 0;
}
