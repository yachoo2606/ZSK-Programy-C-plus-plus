#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>

using namespace std;

void zliczanie (int liczba,int sumaparz,int sumanieparz,fstream &wej,fstream &wyj)
{
    while(!wej.eof())
        {
            wej>>liczba;
            if(liczba%2==0) sumaparz=sumanieparz+liczba; else sumanieparz=sumanieparz+liczba;
        }
        wyj<<endl<<"Suma liczb parzystych: "<<sumaparz<<endl;
        wyj<<endl<<"Suma liczb nie parzystych: "<<sumanieparz<<endl;

}
int main()
{
    fstream wej,wyj;
    int liczba,sumaparz=0,sumanieparz=0,n;

    wyj.open("Dane.txt",ios::out);
    cout<<"ile chcesz losowac: ";
    cin>>n;
    while(n>0)
    {
        wyj<<rand()%50<<endl;
        n--;
    }
    wyj.close();

    wej.open("dane.txt",ios::in);
    wyj.open("Sumy.txt",ios::out);

    if(wej.good())
    {
        cout<<"Praid³owe open!";
        while(!wej.eof())
        {
            wej>>liczba;
            zliczanie(liczba,sumaparz,sumanieparz,wej,wyj);
        }
    }
    else cout<<"Bledne otwarcie!";
    wej.close();
    wyj.close();
    return 0;
}
