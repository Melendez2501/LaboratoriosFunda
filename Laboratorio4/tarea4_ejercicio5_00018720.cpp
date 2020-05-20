#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main (){
    string palabra;
    cout<<"Ingrese la palabra a verificar: ";
    cin>>palabra;
    transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);
    int longitud= palabra.length();
    
    if ((palabra[0])==palabra[longitud-1])
    {
        cout<<"La palabra ingresada inicia y finaliza con la misma letra";
    }
    else
    {
        cout<<"La primera y la ultima letra de la palabra ingresada son diferentes";
    }
    
    return 0;
}