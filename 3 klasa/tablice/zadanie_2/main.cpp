#include <iostream>

using namespace std;

void wprowadz(int *T,int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
    {
        cout<<"Wprowadz "<<i<<" element tablicy: ";
        cin>>T[i];
        cout<<endl;
    }
}
bool spr_ros (int *T,int rozmiar)
{
    for(int i=0;i<rozmiar-1;i++)
    {
        if(T[i]>=T[i+1]) return false;
    }
    return true;
}
bool spr_mal (int *T,int rozmiar)
{
    for(int k=0;k<rozmiar-1;k++)
    {
        if(T[k]<=T[k+1]) return false;
    }
    return true;
}

int main()
{
    int rozmiar;
    cout << "Podaj rozmiar tablicy: " << endl;
    cin>>rozmiar;
    int *T = new int [rozmiar];

    wprowadz(T,rozmiar);
    if(spr_ros(T,rozmiar)) cout<<"Ciag jest rosnacy"; else cout<<"ciag nie jest rosnacy";
    cout<<endl;
    if(spr_mal(T,rozmiar)) cout<<"Ciag jest malejacy"; else cout<<"Ciag nie jest malejacy";

    delete []T;


    return 0;
}
