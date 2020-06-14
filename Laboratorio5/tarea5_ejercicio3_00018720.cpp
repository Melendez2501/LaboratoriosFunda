#include "iostream"
using namespace std;

bool anioBisiesto(int anio){
    if ((anio%400)==0)
        return true;
    else if ((anio%4)==0 && (anio%100)!=0)
        return true;
    else
        return false;
}

int main(){
    bool bisiesto;
    int anio;
    cout<<"Ingrese el a\244o: ";
    cin>>anio;
    bisiesto=anioBisiesto(anio);
    if (bisiesto==true)
    {
        cout<<"El a\244o ingresado es bisiesto";
    }
    else
    {
        cout<<"El a\244o ingresado no es bisiesto";
    }
    return 0;
}