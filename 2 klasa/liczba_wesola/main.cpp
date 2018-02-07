#include <iostream>

using namespace std;
int n;
int main()
{

cout<<"podaj liczbe: ";
cin>>n;

    while(n!=1 && n!=4)
    {
        int s=0;
        while(n>0)
        {
            s=s+(n%10)*(n%10);
            n=n/10;
        }
        n=s;
    }
    if(n==1) cout<<"wesola"; else cout<<"smutna";

    return 0;
}
/*
Przyk³adowo 7 jest liczb¹ weso³¹, poniewa¿ podlega nastêpuj¹cej sekwencji obliczeñ:
7^2 = 4^9
4^2 + 9^2 = 97
9^2 + 7^2 = 130
1^2 + 3^2 + 0^2 = 10
1^2 + 0^2 = 1.
*/
