#include <iostream>

using namespace std;
long long int silnia(int n2)
{
    if(n2==0) return 1;
    return n2*silnia(n2-1);
}
int main()
{
    int n;
    cout << "Podaj wartosc n: " << endl;
    cin>>n;
    cout<<"Silnia wynosi: "<<silnia(n);
    return 0;
}
