#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int longitud;
    string palabra;
    cout<<"Ingrese una palabra: ";
    cin>>palabra;
    longitud= palabra.length();

    if (longitud>10)
    {
        cout<<"La palabra ingresada es mayor a 10 caracteres";
    }
    else
    {
        cout<<"La palabra ingresada no es mayor a 10 caracteres";
    }
    
    if ((longitud%2)==0)
    {
        cout<<" y su longitud es par";
    }
    else
    {
        cout<<" y su longitud es impar";
    }

    return 0;
}