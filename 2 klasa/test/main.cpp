#include <iostream>

using namespace std;
int fib(int N)
{
    if(N==1 || N==2 || N==3) return 2;
    return fib(N-1)+fib(N-2)+fib(N-3);
}
int main()
{
    int n;
    cout<<"podaj któr¹ pozycjê chesz: "<<endl;
    cin>>n;
    cout<<"Liczba wynosi: "<<fib(n);
    return 0;
}
