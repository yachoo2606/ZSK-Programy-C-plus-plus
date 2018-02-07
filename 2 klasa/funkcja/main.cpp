#include <iostream>

using namespace std;
double sumator(double AA, double BB)
{
 return AA+BB;
 }
void sumator2(double AA, double BB)
{
 cout<<AA+BB;
}
int main()
{
    double a,b;
    cout<<"podaj a: ";
    cin>>a;
    cout<<"podaj b: ";
    cin>>b;
    sumator2(a,b);
    return 0;
}
