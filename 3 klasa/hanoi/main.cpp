#include <iostream>

using namespace std;

void hanoi(int n,char a,char b,char c)
{
    if(n>0)
    {
    hanoi(n-1,a,c,b);
    cout<<a<<" Na "<<b<<"\n";
    hanoi(n-1,c,b,a);
    }
}

int main()
{
    int n=3;
    char a='a',b='b',c='c';
   hanoi(n,a,b,c);
    return 0;
}
