#include <iostream>
using namespace std;
int fibonaci1(int N)
{
int fN, f1=1, f2=1;
if(N==1 || N==2) cout<<"1";
else cout<<1<<endl;
     cout<<1<<endl;
for(int i=3;i<=N;i++)
{
fN=f1+f2;
f1=f2;
f2=fN;
cout<<fN<<endl;
}
cout<<"Liczba par: "<<fN;
   return 0;
}
void fibonaci2(int N)
{
int fN, f1=1, f2=1;
if(N==1 || N==2) cout<<"1";
else cout<<1<<endl;
     cout<<1<<endl;
for(int i=3;i<=N;i++)
{
fN=f1+f2;
f1=f2;
f2=fN;
cout<<fN<<endl;
}
cout<<"Liczba par: "<<fN<<endl;
}


int main()
{
int n;
cout<<"ktora chcesz pozycje ciagu fibonacciego: ";
cin>>n;
fibonaci1(n);
fibonaci2(n);

    return 0;
}
