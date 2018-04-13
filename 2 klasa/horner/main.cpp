#include <iostream>

using namespace std;
int Horner(int p, string liczba)
{
    int n=liczba.size();
    int w=(int)liczba[0]-48;
    for (int i=1;i<n;i++)
    {
        w=w*p+liczba[i]-48;
    }
    return w;
}
int main()
{
    string liczba;
    int p;
    cout <<"Podaj liczbe" << endl;
    cin>>liczba;
    cout<<"Podaj podstawe systemu:";
    cin>>p;
    cout<<Horner(p,liczba);
    /*int n=liczba.size();
    int w=(int)liczba[0]-48;
    for (int i=1;i<n;i++)
    {
        w=w*p+liczba[i]-48;
    }
    cout<<w;*/
    return 0;
}
