#include <iostream>

using namespace std;
int main()
{
int fn, f1=1, f2=1;
int n;
cout<<"któr¹ chcesz pozycje ci¹gu fibonacciego: ";
cin>>n;
if(n==1 || n==2) cout<<"1";
else cout<<1<<endl;
     cout<<1<<endl;
for(int i=3;i<=n;i++)
{
fn=f1+f2;
f1=f2;
f2=fn;
cout<<fn<<endl;
}
cout<<"Liczba par: "<<fn;
   return 0;
}
