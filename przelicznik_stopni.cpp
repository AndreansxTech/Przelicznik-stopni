#include <iostream>
#include <cmath>
#include <windows.h>
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

void informacja()
{
    SetConsoleTextAttribute(color,14); cout<<"[";
    SetConsoleTextAttribute(color,12); cout<<"!";
    SetConsoleTextAttribute(color,14); cout<<"]";
}
void wypisanie_wyniku()
{
    SetConsoleTextAttribute(color,11);
}
void linia()
{
    int linijka;
    SetConsoleTextAttribute(color,11);
    while (linijka<40)
    {
        cout<<"-"; Sleep(30);
        linijka+=1;
    }
    cout<<"\n";
}

int main()
{

    SetConsoleTextAttribute(color,12); cout<<"--- Przelicznik stopni ---\n";
    SetConsoleTextAttribute(color,13); cout<<" Made by @AndreansxTech on Github\n"; linia();
    double k,f,c=0.0;
    char wybor;

        while (true)
        {
        cout<<"\n";informacja();
        cout<<" Wybierz w jakich stopniach chcesz wprowadzic wartosc\n"; wypisanie_wyniku();
        cout<<" (C- Celsjusza, F- Fahrenheita, K- Kelwiny / W aby wyjsc): ";cin>>wybor;cout<<"\n";
        switch (wybor)
        {
        case 'c':
        case 'C':
            informacja(); cout<<" Wybrales Celsjusze\n Wprowadz wartosc: "; cin>>c;
            f=(2*(c-0.1*c))+32; k=c+273.15; wypisanie_wyniku(); cout<<"\n";
            cout<<c<<" stopni Celsjusza to:\n"<<f<<" stopni Fahrenheita\n"<<k<<" Kelwinow\n";
            break;
        case 'F':
        case 'f':
            informacja(); cout<<" Wybrales Fahrenheity\n Wprowadz wartosc: "; cin>>f;
            c=(5.0/9.0)*(f-32); k=(c+273.15);cout<<"\n";wypisanie_wyniku();
            cout<<f<<" stopni fahrenheita to:\n"<<c<<" stopni Celsjusza\n"<<k<<" Kelwinow\n";
            break;
        case 'K':
        case 'k':
            informacja(); cout<<" Wybrales Kelwiny\n Wprowadz wartosc: ";cin>>k;
            break;
        case 'W':
        case 'w':
            informacja();cout<<" Opuszczasz program";
            int kropki;
            while (kropki<6)
            {
                cout<<"."; Sleep(200); kropki+=1;
            }
            exit(0);
        default:
            SetConsoleTextAttribute(color,12); cout<<"Nie ma takiej opcji\n";
            break;

        }
    }

}
