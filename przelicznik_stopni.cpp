#include <iostream>
using namespace std;
float f,k,c;
int main()
{
    cout<<"Przelicznik stopni"<<endl;
    cout<<"Podaj temperature w stopniach Fahrenheita: ";
    cin>>f;
    c=(5.0/9.0)*(f-32); k=c+273.15;
    cout<<f<<" stopni Fahrenheita to "<<c<<" stopni Celsjusza oraz "<<k<<" Kelvinow"<<endl;
    return 0;
}
