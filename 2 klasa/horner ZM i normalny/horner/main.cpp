#include <iostream>

using namespace std;

void HornerZM(int podstawa, string liczba)
{
    int n=liczba.size();
    int w=(int)liczba[1]-48;
    for (int i=2;i<n;i++)
    {
        w=w*podstawa+liczba[i]-48;
    }
    if(((int)liczba[0]-48)==1) cout<<"liczba wynosi: -"<<w; else cout<<"Liczba wynosi: "<<w;
}
int main()
{
    int wybor;
    string liczba;
    int p;
    cout<<"1) konwersja z systemu liczbowego na 10"<<endl<<"2) konjwersja binarna ZM na 10"<<endl;
    do
    cin>>wybor;
    while(wybor>2);

   switch(wybor)
    {
        case 1 :
            {
            cout<<"Podaj liczbe w systemie od 2 do 9: ";
            cin>>liczba;
            cout<<"Podaj podstawe systemu: ";
            cin>>p;
            int n=liczba.size();
            int w=(int)liczba[0]-48;
            for (int i=1;i<n;i++)
            {
                w=w*p+liczba[i]-48;
            }
            cout<<"Liczba wynosi:"<<w;
            } break;
        case 2 :
            {
            cout<<"Podaj liczbe w systemie ZM: ";
            cin>>liczba;
            cout<<"Podaj podastawe: ";
            cin>>p;
            HornerZM(p,liczba);
            }
    }
    return 0;
}

