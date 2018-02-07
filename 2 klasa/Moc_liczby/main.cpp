#include <iostream>

using namespace std;
int liczba,moc=0;
int main()
{
cout<<"Podaj liczbe: ";
cin>>liczba;
    while(liczba>=10)
    {
        int iloczyn=1;
        while(liczba>0)
            {
                iloczyn=iloczyn*(liczba%10);
                liczba=liczba/10;
            }
        cout<<iloczyn<<endl;
        liczba=iloczyn;
        moc++;
    }
    cout<<"moc jest rowna: "<<moc;

    return 0;
}
