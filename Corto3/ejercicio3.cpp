#include <iostream>
using namespace std;

//Definimos una variable que devolvera un valor booleano que determinara si es o no bisiesto
bool anioBisiesto(int anio){    //Se toma como argumento el año
    if ((anio%400)==0)
        return true;    //Si la primera prueba es verdadera enviara un valor verdadero
    else if ((anio%4)==0 && (anio%100)!=0)
        return true;    //Si la segunda prueba es verdadera enviara un valor verdadero
    else
        return false;  //Sino devolvera un valor falso
}

int main(){
    int anio;   //Se declara la variable que almacenara el año
    cout<<"Ingrese el a\244o: ";
    cin>>anio; //Se guarda el año
    //Declaramos la variable que almacenara el booleano
    bool valor= anioBisiesto(anio); //Se envia el año como parametro a la funcion retornando un booleano
    if (valor == true) //Si el valor almacenado en la variable valor es verdadero se ejecuta el codigo dentro del if 
        cout<<"El a\244o ingresado es bisiesto";
    else   //Sino mostramos que el año no es bisiesto
        cout<<"El a\244o ingresado no es bisiesto";

    return 0;
}