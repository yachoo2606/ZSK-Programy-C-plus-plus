#include <iostream>

using namespace std;

int fib (int pozycja2)
{
    if (pozycja2==1 || pozycja2==2) return 1;
    return fib(pozycja2-1)+fib(pozycja2-2);
}


int main()
{
    int pozycja;
    cout << "ktory wyraz ciagu fibonaciego chcesz otrzymac: " << endl;
    cin>>pozycja;
    cout<<endl<<fib(pozycja);
    return 0;
}
