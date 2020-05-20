#include <iostream>

using namespace std;

int main (){
    int numero;
    cout<<"Ingrese el numero a verificar: ";
    cin>>numero;
    if (numero>0)
    {
        cout<<"El numero ingresado es positivo";
    }
    else if (numero<0)
    {
        cout<<"El numero ingresado es negativo";
    }
    else
    {
        cout<<"El numero ingresado es cero";
    }
    
    return 0;
}