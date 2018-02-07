#include <iostream>

using namespace std;
string u2nau1(string liczba1)
{
    int n=liczba1.size();
    int zmienna;
    if(liczba1[n-1]=='0') zmienna=0 ;else zmienna=1;
    switch(zmienna)
    {
        case 0 : {cout<<"nie wiem jak zrobic";return 0;}
        case 1 :
            {
                liczba1[n-1]='0';
            }
            return liczba1;
    }
}
string u1nazm(string liczba2)
{
    int n=liczba2.size();
    for(int i=1;i<n;i++)
    {
        if(liczba2[i]=='0') liczba2[i]='1' ;else liczba2[i]='0';
    }
    return liczba2;
}
void zamiana(string liczba2)
{
    int n=liczba2.size();
    int w=(int)liczba2[1]-48;
    for (int i=2;i<n;i++)
    {
        w=w*2+liczba2[i]-48;
    }
    if(((int)liczba2[0]-48)==1) cout<<"liczba wynosi: -"<<w; else cout<<"Liczba wynosi: "<<w;
}
int main()
{
    string liczba;
    cout << "Podaj liczbe w systemie U2: " << endl;
    cin>>liczba;
    cout<<"U2: "<<liczba<<endl;
    cout<<"U1: "<<u2nau1(liczba)<<endl;
    string liczba1=u2nau1(liczba);
    cout<<"ZM: "<<u1nazm(liczba1)<<endl;
    string liczba2=u1nazm(liczba1);
    zamiana(liczba2);
    return 0;
}
