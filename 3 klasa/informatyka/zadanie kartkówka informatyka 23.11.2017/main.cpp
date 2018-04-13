#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>

using namespace std;
void dzielniki(int liczba,fstream &wyj)
{
    wyj<<"Dzielniki liczby: "<<liczba<<" : ";
    for(int i=1;i<=liczba;i++)
    {
        if(liczba%i==0) wyj<<i<<" ";
    }
}
void losowanie(fstream &wyj)
{
    wyj<<rand()%30<<endl;
}
void faktoryzacja(int liczba,fstream &wyj)
{
    int czynnik=2;
    wyj<<endl<<"Faktory liczby "<<liczba<<" : ";
    while(liczba>1)
    {
        while(liczba%czynnik==0)
        {
            wyj<<" , "<<czynnik;
            liczba=liczba/czynnik;
        }
        czynnik++;
    }
    //wyj<<endl;
}
int main()
{
    fstream wej,wyj;
    int liczba;
    int n;
    srand(time(NULL));
    cout<<"Podaj ile chcesz wylosowac liczb: ";
    cin>>n;
    wyj.open("liczby.txt",ios::out);
    if(wyj.good())
    {
        cout<<"Poprawne otwarcie!"<<endl;
        while(n>0)
        {
            losowanie(wyj);
            n--;
        }
    }
    else cout<<"Bledne otwarcie!";
    wyj.close();

    wej.open("liczby.txt",ios::in);
    wyj.open("wynik.txt",ios::out);
    if(wej.good())
    {
        cout<<"Poprawne otwarcie!"<<endl;
        while(!wej.eof())
        {
            wej>>liczba;
            dzielniki(liczba,wyj);
            wyj<<endl;
            //cout<<liczba<<endl;
        }
    }
    else cout<<"bledne otwarcie";
    wej.close();
    wyj.close();

    wej.open("liczby.txt",ios::in);
    wyj.open("Faktoryzacja.txt",ios::out);
    if(wej.good())
    {
        cout<<"Poptawne otwarcie!";
        while(!wej.eof())
        {
            wej>>liczba;
            faktoryzacja(liczba,wyj);
        }
    }
    else cout<<"Bledne otwarcie!";
    return 0;
}
