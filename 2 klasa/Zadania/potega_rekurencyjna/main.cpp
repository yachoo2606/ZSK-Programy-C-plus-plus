#include <iostream>

using namespace std;

int potega(int AA,int BB)
{
    if (BB==0) return 1;
    return AA*potega(AA,BB-1);
}
int main()
{
    int podstawa;
    int wykladnik;
    cout << "Podaj podstawe potegi: " << endl;
    cin>>podstawa;
    cout<<"Podaj wykladnik: "<<endl;
    cin>>wykladnik;
    cout<<"Potega wynosi: "<<potega(podstawa,wykladnik);
    return 0;
}
