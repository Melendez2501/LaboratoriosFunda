#include<iostream>
#include<string.h>

using namespace std;

//Declaramos la funcion donde codificaremos cada letra
char codificarLetra(char); //El tipo de dato que se toma como argumento es de tipo char

int main() {
    int longitud;   //Declaramos un entero para guardar la longitud de la cadena
    char arreglo[100]; //Declaramos en este un arreglo que aceptara como maximo cien caracteres
    cout<<"Ingrese una frase: ";
    cin.getline(arreglo, 100);   //tomamos a traves de un getline la frase por si hay espacios en ella y la guardamos en el arreglo y ponemos su limite
    longitud = strlen(arreglo);  //Obtenemos la longitud de los caracteres ingresados
    cout<<"La frase codificada es: ";
    for (int i = 0; i < longitud; i++)  //Recorremos cada caracter de la frase de inicio a fin
        cout<<(codificarLetra(arreglo[i])); //El valor retornado de la funcion que codificara el caracter actual o el mismo valor en caso de no haber uno
    return 0;   //Sera desplegado una vez la funcion haya devuelto el caracter
}

//Creamos la funcion y pedimos como argumento un caracter
char codificarLetra(char caracter){
    switch (caracter)   //Mediante un switch codificaremos el caracter
    {   //Si el caracter es igual a un caracter de murcielago entonces el caracter pasara a ser codificado
    case 'm': case 'M': caracter='0'; break;    // Sino hay uno entonces el valor del caracter se mantiene
    case 'u': case 'U': caracter='1'; break;
    case 'r': case 'R': caracter='2'; break;
    case 'c': case 'C': caracter='3'; break;
    case 'i': case 'I': caracter='4'; break;
    case 'e': case 'E': caracter='5'; break;
    case 'l': case 'L': caracter='6'; break;
    case 'a': case 'A': caracter='7'; break;
    case 'g': case 'G': caracter='8'; break;
    case 'o': case 'O': caracter='9';break;
    }
    return caracter;    //Se retorna el caracter igual o codificado si se encontro uno igual
}