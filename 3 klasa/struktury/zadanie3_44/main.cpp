#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

struct przelot
{
    string trasa;
    double cena;
    double ilosc;
    double czas;
    string linia;
} lot;

int main()
{
    int n;

    fstream wej,wyj;
    string linijka;
    wej.open("dane.txt",ios::in);
    {
        if(wej.good())
        {
            cout<<"Poprawne otwarcie!\n";
            getline(wej,linijka);
            n = atoi(linijka.c_str());
            cout<<n<<endl;

            przelot *lot = new przelot [n];

            for(int i=0; i<n; i++)
            {
                string wiersz;
                getline(wej,wiersz);

                lot[i].trasa=wiersz;

                getline(wej,wiersz);
                lot[i].cena=atof(wiersz.c_str());

                getline(wej,wiersz);
                lot[i].ilosc=atof(wiersz.c_str());

                getline(wej,wiersz);
                lot[i].czas=atof(wiersz.c_str());

                getline(wej,wiersz);
                lot[i].linia=wiersz;
            }
            for(int i=0; i<n; i++)
            {
                cout<<"====================================\n";
                cout<<"Przelot "<<i<<":\n";
                cout<<"Trasa lotu: "<<lot[i].trasa<<"\n";
                cout<<"Cena lotu: "<<lot[i].cena<<"\n";
                cout<<"Odleglosc: "<<lot[i].ilosc<<"\n";
                cout<<"Czas lotu: "<<lot[i].czas<<"\n";
                cout<<"Przewoznik (linia): "<<lot[i].linia<<"\n";
                cout<<"====================================\n";
            }
            int suma=0,avg=0;
            for(int i=0;i<n;i++)
            {
                suma=suma+lot[i].cena;
            }
            avg=suma/n;
            cout<<"\n\n========================================\n";
            cout<<"Srednia cena wszystkich biletow: "<<setprecision(3)<<avg<<"\n";
            cout<<"========================================\n";

            double cena_za_km;
            cena_za_km=lot[0].ilosc/lot[0].cena;

            cout<<"\n\n========================================\n";
            cout<<"Cena za kilometr: "<<cena_za_km<<" zl\n";
            cout<<"========================================\n";

            for(int i=0;i<n;i++)
            {
                if(lot[i].czas>2 && lot[i].linia[0]=='L')
                {
                    cout<<"\n\nlot krotszy od 2h i linia na L: \n";
                    cout<<"====================================\n";
                    cout<<"Przelot "<<i<<":\n";
                    cout<<"Trasa lotu: "<<lot[i].trasa<<"\n";
                    cout<<"Cena lotu: "<<lot[i].cena<<"\n";
                    cout<<"Odlegosc: "<<lot[i].ilosc<<"\n";
                    cout<<"Czas lotu: "<<lot[i].czas<<"\n";
                    cout<<"Przewoznik (linia): "<<lot[i].linia<<"\n";
                    cout<<"====================================\n";
                }
            }
        }
        else cout<<"Bledne otwarcie!";
    }




    return 0;
}
