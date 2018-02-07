#include <iostream>

using namespace std;
int liczba_cyfr(int N)
{
    int wynik=0;
    while(N>0)
    {
        wynik=wynik+1;
        N=N/10;
        return wynik;
    }
}
int potega(int podstawa,int wykladnik)
{
    int wynik=1;
    for(int i=1;i<=wykladnik;i++)
    {
        wynik=wynik*podstawa;
    }
    return wynik;
}
 bool automorficzna(int N){
 int kwadrat=potega(N,2);
 if (N==kwadrat%(potega(10,liczba_cyfr(N)))) return true ; return false;


 }
int main()
{
    int n, wykladnik2;
    do
    {
    cout<<"podaj liczbe: ";
    cin>>n;
    }
    while(n<=1);

   if (automorficzna(n)) cout<<"automorficzna"; else cout<<"nie automorficzna";
    return 0;
}
