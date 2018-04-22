#include <iostream>
#include <fstream>

using namespace std;
int suma_skladnikow(int liczba,int suma)
{
    while(liczba>0)
    {
        suma=suma+(liczba%10);
        liczba=liczba/10;
    }
    return suma;
}
int rozklad_na_czynniki(int liczba,int suma)
{
    int i=2;
    int suma2=0;
    while(liczba>1)
    {
        while(liczba%i==0)
        {
            suma=suma+suma_skladnikow(i,suma2);
            liczba=liczba/i;
        }
        i++;
    }
    return suma;
}
int main()
{
    int liczba;
    int sumafakt=0;
    int sumaczyn=0;
    fstream wej,wyj;
    wej.open("dane.txt",ios::in);
    wyj.open("wyjscie.txt",ios::out);
    if(wej.good())
    {
        while(!wej.eof())
        {
            wej>>liczba;
            cout<<liczba<<endl;
             cout<<"Suma faktorow jest rowna: "<<suma_skladnikow(liczba,sumafakt)<<endl;
             cout<<"Suma czynnikow jest rowna: "<<rozklad_na_czynniki(liczba,sumaczyn)<<endl;
            if(suma_skladnikow(liczba,sumafakt)==rozklad_na_czynniki(liczba,sumaczyn)) cout<<endl<<"Liczba jest liczba shmitda"<<endl;
                    else cout<<endl<<"Liczba nie jest liczba shmitda"<<endl;
        }
    }
    return 0;
}
