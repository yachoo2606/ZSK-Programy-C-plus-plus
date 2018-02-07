#include <iostream>

using namespace std;

char znak(int liczba)
{
    switch(liczba)
    {
        case 1 : return '1';
        case 0 : return '0';
    }
}
string binnazm1(int liczba,string L)
{
    int liczba1=liczba;
    liczba=liczba*-1;
    while(liczba>0)
        {
        if(liczba%2==0) L=znak(0)+L; else L=znak(1)+L;
        liczba=liczba/2;
        }
        if(liczba1<0) L=znak(1)+L; else L=znak(0)+L;
        return L;
}
string binnazm2(int liczba, string L)
{
    int liczba1=liczba;
            while(liczba>0)
        {
        if(liczba%2==0) L=znak(0)+L; else L=znak(1)+L;
        liczba=liczba/2;
        }
        if(liczba1<0) L=znak(1)+L; else L=znak(0)+L;
        return L;
}
void zmnau1(string L1)
{

    int n=L1.size();
        for(int x=1;x<n;x++)
    {
        if(L1[x]=='0') L1[x]='1'; else L1[x]='0';
    }
    cout<<"U1: "<<L1<<endl;
}
string zmnau11(string L1)
{

    int n=L1.size();
        for(int x=1;x<n;x++)
    {
        if(L1[x]=='0') L1[x]='1'; else L1[x]='0';
    }
    return L1;
}
string dodaj(string a, string b)
{
    string w = "";
    int OF = 0;

    for(int i = a.length()-1, j = b.length()-1; max(i,j) >= 0; i--, j--)
    {
            int wynik = 0;

            if(i >= 0)
                wynik += a[i]-'0';

            if(j >= 0)
                wynik += b[j]-'0';

            wynik += OF;

            if(wynik > 1)
            {
                OF = 1;
                wynik %= 2;
            }
            else
                OF = 0;

            w = (char)('0' +  wynik) + w;
    }
    return w;
}
void u1nau2(string L4)
{
    int k=L4.size();
    int zmienna2;
    if(L4[k-1]=='0') zmienna2=1 ;else zmienna2=0;
    switch(zmienna2)
    {
 case 1:
    {
        L4[k-1]='1';
        cout<<"U2: "<<L4;};
        break;


 case 0 :
     string jedynka="1";
       cout<<"U2: "<<dodaj(L4,jedynka);
       }
}
int main()
{   int liczba,zmienna;
string L1;
    string L="";
    cout << "podaj liczbe : " << endl;
    cin>>liczba;
    int liczba1=liczba;
    if (liczba>0) zmienna=0; else zmienna=1;
    switch(zmienna)
    {
    case 0 :
    {
        cout<<"ZM: "<<binnazm2(liczba1,L)<<endl;
        string L1=binnazm2(liczba1,L);
        cout<<"U1: "<<L1<<endl;
        cout<<"U2: "<<L1;
    }
    break;
    case 1 :
    {
          cout<<"ZM: "<<binnazm1(liczba1,L)<<endl;
          L1=binnazm1(liczba1,L);
          zmnau1(L1);
          string L3=zmnau11(L1);
          u1nau2(L3);
    }
    }
    return 0;
}
