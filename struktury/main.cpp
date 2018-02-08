#include <iostream>

using namespace std;

int main()
{
    struct pierwsza
    {
        int a[25];
        char b;
        double c[30];
    } A;

    struct druga
    {
      char d[100];
      int e;
      pierwsza f;
    } B;

    cout<<B.f;
    return 0;
}
