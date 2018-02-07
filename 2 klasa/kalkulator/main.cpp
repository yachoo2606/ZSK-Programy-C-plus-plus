#include <iostream>
#include <cmath>
using namespace std;
long int potega(int podstawa, int wykladnik)
{
    if(wykladnik==0) return 1;
    return podstawa*potega(podstawa,wykladnik-1);
}
int main()
{
    int zmienna;
    cout << "1) Dodawanie: " << endl;
    cout << "2) odejmowanie"<<endl;
    cout << "3) mno\276enie"<<endl;
    cout << "3) dzielenie"<<endl;
    cout << "4) pot\251gowanie"<<endl;
    cout << "5) pierwiastkowanie"<<endl;
    cout << "10) Zako\344cz"<<endl;
    Start:
    cin>>zmienna;

    switch(zmienna)
    {
    case 1 :
        {
            int pierwsza, druga;
            cout<<"Podaj pierwsza liczbe: ";
            cin>>pierwsza;
            cout<<"Podaj druga: ";
            cin>>druga;
            cout<<pierwsza+druga<<endl;
            goto Start;
        }
        break;
    case 2 :
        {
            long int pierwsza, druga;
            cout<<"Podaj pierwsza liczbe: ";
            cin>>pierwsza;
            cout<<"Podaj druga: ";
            cin>>druga;
            cout<<pierwsza-druga<<endl;
            goto Start;
        }
        break;
    case 3 :
        {
            long int pierwsza, druga;
            cout<<"Podaj pierwsza liczbe: ";
            cin>>pierwsza;
            cout<<"Podaj druga: ";
            cin>>druga;
            cout<<pierwsza*druga<<endl;
            goto Start;
        }
        break;
    case 4 :
        {
            long int podstawa, wykladnik;
            cout<<"Podaj podstawe: ";
            cin>>podstawa;
            cout<<"Podaj druga: ";
            cin>>wykladnik;
            cout<<potega(podstawa,wykladnik)<<endl;
            goto Start;
        }
    case 5 :
        {
            long int liczba;
            cout<<"Podaj liczbe do zpierwiastkowanie: "<<endl;
            cin>>liczba;
            cout<<sqrt(liczba)<<endl;
            goto Start;
        }
    case 10 :
        {
            cout<<"Koniec programu :)"<<endl;
        }
    }
    return 0;
}
