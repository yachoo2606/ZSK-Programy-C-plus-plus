#include <iostream>
#include <string>

using namespace std;

    struct student
    {
        string imie;
        string nazwisko;
        int rok;
        int wiek;
        double stypN;
        double stypS;
    };

int main()
{
    int j;
    double rok_studiow,suma_soc=0;
    student tablica[5]=
    {
        {"Jan","Bialy",4,19,100,10},
        {"Pawel","Palacz",3,19,100,9},
        {"Marco","Krasniaki",2,19,80,8},
        {"Karolina","Zdziechowska",1,16,70,7},
        {"Patrycja","Bartczak",0,18,60,6}
    };

    for(int i=0;i<5;i++)
    {
        cout<<"===================================\n";
        cout<<"Imie: "<<tablica[i].imie<<"\n";
        cout<<"Nazwisko: "<<tablica[i].nazwisko<<"\n";
        cout<<"Rok: "<<tablica[i].rok<<"\n";
        cout<<"Wiek: "<<tablica[i].wiek<<"\n";
        cout<<"wysokosc stypendium naukowego: "<<tablica[i].stypN<<"\n";
        cout<<"wysokosc stypendium socjalnego: "<<tablica[i].stypS<<"\n";
        cout<<"===================================\n\n";
    }
    cout<<"\n\n=======================================================\n";
    cout<<"=======================================================\n\n";

    cout<<"Podaj rok studiow: ";
    cin>>rok_studiow;
    cout<<"\n";
    for(int i=0;i<5;i++)
    {
        if(tablica[i].nazwisko[tablica[i].nazwisko.size()-1]=='i' && tablica[i].rok==rok_studiow)
        {
            cout<<"===================================\n";
            cout<<"Nazwisko: "<<tablica[i].nazwisko<<"\n";
            cout<<"Wiek: "<<tablica[i].wiek<<"\n";
            cout<<"wysokosc stypendium naukowego: "<<tablica[i].stypN<<"\n";
            cout<<"===================================\n\n";
        }
    }
    for(int i=0;i<5;i++)
    {
        if(tablica[i].rok==1)
        {
            suma_soc+=tablica[i].stypS;
        }
    }

    cout<<"===================================================\n";
    cout<<"Suma stypendium socjalnego na pierwszym roku: "<<suma_soc<<"\n";
    cout<<"===================================================\n\n";

    j=tablica[0].stypN;
    for(int i=1;i<5-1;i++)
    {
        if(tablica[i].stypN > tablica[i-1].stypN) j=tablica[i].stypN;
    }

    int tablica1[5]={};

    for(int i=0;i<5;i++)
    {
        if(tablica[i].stypN==j) tablica1[i]++;
    }
          cout<<"===================================================\n";
          cout<<"Nazwiska osob z najwyzszym stypendium naukowym: \n";
          cout<<"===================================================\n";
    for(int i=0;i<5;i++)
    {
        if(tablica1[i]==1)
        {
          cout<<"===================================\n";
          cout<<"Nazwisko: "<<tablica[i].nazwisko<<"\n";
          cout<<"===================================\n";
        }
    }
          cout<<"\n\n===================================================\n";
          cout<<"Nazwiska osob z najnizszym stypendium socjalnym: \n";
          cout<<"===================================================\n";
            j=tablica[0].stypN;
            for(int i=1;i<5-1;i++)
            {
                if(tablica[i].stypS < tablica[i-1].stypS) j=tablica[i].stypS;
            }

            int tablica2[5]={};

            for(int i=0;i<5;i++)
            {
                if(tablica[i].stypS==j) tablica2[i]++;
            }
         for(int i=0;i<5;i++)
    {
        if(tablica2[i]==1)
        {
          cout<<"===================================\n";
          cout<<"Nazwisko: "<<tablica[i].nazwisko<<"\n";
          cout<<"===================================\n";
        }
    }


    return 0;
}
