#include <iostream>
using namespace std;

int F(int N)
{
    ile++;
    if(N==1 || N==2) return 1; return F(N-1)+F(N-2) ;
}
int main()
{
    int n;
    cout<<"podaj miesiac: ";
    cin>>n;
    cout<<"liczba wynosi: "<<F(n)<<endl;
    return 0;
}
