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

int main()
{

    SetConsoleTextAttribute(color,12); cout<<"--- Przelicznik stopni ---\n";
    SetConsoleTextAttribute(color,13); cout<<" Made by @AndreansxTech on Github\n";
    double k,f,c=0.0;
    char wybor;

        while (true)
        {
        wypisanie_wyniku();
        cout<<"Wybierz w jakich stopniach chcesz wprowadzic wartosc (C- Celsjusza, F- Fahrenheita, K- Kelwiny): ";
        cin>>wybor;
        switch (wybor)
        {
        case 'c':
        case 'C':
            informacja(); cout<<" Wybrales Celsjusze\n Wprowadz wartosc: "; cin>>c;
            f=(c*(5.0/9.0))+32;
            cout<<c<<" stopni Celsjusza to:\n"<<f<<" stopni Fahrenheita\n";
            break;
        case 'F':
        case 'f':
            informacja(); cout<<" Wybrales Fahrenheity\n Wprowadz wartosc: "; cin>>f;
            c=(5.0/9.0)*(f-32); k=(c+273.15);
            cout<<f<<" stopni fahrenheita to:\n"<<c<<" stopni Celsjusza\n"<<k<<" Kelwinow\n";
            break;
        case 'K':
        case 'k':
            informacja(); cout<<" Wybrales Kelwiny\n Wprowadz wartosc: ";cin>>k;
            break;


        }
    }

}
