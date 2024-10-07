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
void logo()
{
    SetConsoleTextAttribute(color,9);
    cout<<R"(
,------.                      ,--.,--.                     ,--.,--.
|  .--. ',--.--.,-----. ,---. |  |`--' ,---.,-----.,--,--, `--'|  |,-.
|  '--' ||  .--'`-.  / | .-. :|  |,--.| .--'`-.  / |      \,--.|     /
|  | --' |  |    /  `-.\   --.|  ||  |\ `--. /  `-.|  ||  ||  ||  \  \
`--'     `--'   `-----' `----'`--'`--' `---'`-----'`--''--'`--'`--'`--'


            ,--.                        ,--.               ,--.     ,--.
     ,---.,-'  '-. ,---.  ,---. ,--,--, `--'    ,--.  ,--./    \   /   |
    (  .-''-.  .-'| .-. || .-. ||      \,--.     \  `'  /|  ()  |  `|  |
    .-'  `) |  |  ' '-' '| '-' '|  ||  ||  |      \    /  \    /.--.|  |
    `----'  `--'   `---' |  |-' `--''--'`--'       `--'    `--' '--'`--'
                         `--'                                               )";
    cout<<"\n Zbudowany przez @AndreansxTech na Github\n";
    int linia=0;
    while (linia<50)
    {
        cout<<"-"; Sleep(2);
        linia+=1;
    }
    cout<<"\n";
}

int main()
{
    logo();
    double k,f,c=0.0;
    char wybor;

        while (true)
        {
        cout<<"\n";informacja();
        cout<<" Wybierz w jakich stopniach chcesz wprowadzic wartosc\n"; SetConsoleTextAttribute(color,11);
        cout<<" (C- Celsjusza, F- Fahrenheita, K- Kelwiny / W aby wyjsc): ";cin>>wybor;cout<<"\n";
        switch (wybor)
        {
        case 'c':
        case 'C':
            informacja(); cout<<" Wybrales Celsjusze\n Wprowadz wartosc: "; cin>>c;
            f=(2*(c-0.1*c))+32; k=c+273.15; SetConsoleTextAttribute(color,11); cout<<"\n";
            cout<<c<<" stopni Celsjusza to:\n"<<f<<" stopni Fahrenheita\n"<<k<<" Kelwinow\n";
            break;
        case 'F':
        case 'f':
            informacja(); cout<<" Wybrales Fahrenheity\n Wprowadz wartosc: "; cin>>f;
            c=(5.0/9.0)*(f-32); k=(c+273.15);cout<<"\n";SetConsoleTextAttribute(color,11);
            cout<<f<<" stopni fahrenheita to:\n"<<c<<" stopni Celsjusza\n"<<k<<" Kelwinow\n";
            break;
        case 'K':
        case 'k':
            informacja(); cout<<" Wybrales Kelwiny\n Wprowadz wartosc: ";cin>>k;
            c=k-273.15; f=f=(2*(c-0.1*c))+32;cout<<"\n"; SetConsoleTextAttribute(color,11);
            cout<<k<<" Kelwinow to: \n"<<c<<" stopni Celsjusza\n"<<f<<" stopni Fahrenheita\n";
            break;
        case 'W':
        case 'w':
            informacja();cout<<" Opuszczasz program";
            int kropki;
            while (kropki<10)
            {
                SetConsoleTextAttribute(color,kropki);
                cout<<"."; Sleep(150); kropki+=1;
            }
            exit(0);
        default:
            SetConsoleTextAttribute(color,4); cout<<"Nie ma takiej opcji\n";
            break;

        }
    }

}
