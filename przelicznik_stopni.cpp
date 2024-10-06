#include <iostream>
#include <windows.h>
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

int main()
{
    SetConsoleTextAttribute(color,12); cout<<"--- Przelicznik stopni ---\n";
    SetConsoleTextAttribute(color,13); cout<<" Made by @AndreansxTech on Github\n";
    float f,k,c;
    char wybor;
    cout<<"Wybierz w jakich stopniach chcesz wprowadzic wartosc (C- Celsjusza, F- Fahrenheita, K- Kelwiny): ";
    cin>>wybor;
    switch (wybor)
    {
    case 'c':
    case 'C':

    }
}
