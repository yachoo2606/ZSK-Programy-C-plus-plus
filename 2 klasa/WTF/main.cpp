#include <iostream>

using namespace std;
int wynik=0;
int suma(int AA,int BB)
{
    wynik=AA+BB;
    return wynik;

}
int main()
{
    int a,b;
    cout<<"podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"podaj druga liczbe: ";
    cin>>b;
    suma(a,b);
    cout<<wynik;


    return 0;
}
