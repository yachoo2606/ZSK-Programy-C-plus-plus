#include <iostream>

using namespace std;
int NWD2(int a, int b)
{
    while(a!=b)
        {
        if(a>b) a=a-b;
        else b=b-a;
        }
        return a;
}
int main()
{
    int a,b;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<endl<<"Podaj druga liczbe: ";
    cin>>b;
    cout<<"NWD wynosi: "<<NWD2(a,b);
    return 0;
}
