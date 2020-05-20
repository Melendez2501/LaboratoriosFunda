#include <iostream>

using namespace std;

int main (){
    int numero;
    cout<<"Ingrese el numero a verificar: ";
    cin>>numero;
    if ((numero%2)==0)
    {
        cout<<"El numero ingresado es par";
    }
    else
    {
        cout<<"El numero ingresado es impar";
    }
      
    return 0;
}