#include <iostream>

using namespace std;
int nwd(int a,int b)
    {
    int r;
    while (b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
    }
int main()
{
    int a, b;
    cout << "Podaj liczbe A: " << endl;
    cin>>a;
    cout<<"Podaj liczbe B: "<<endl;
    cin>>b;
    cout<<"NWD wynosi: "<<nwd(a,b);
    return 0;
}
