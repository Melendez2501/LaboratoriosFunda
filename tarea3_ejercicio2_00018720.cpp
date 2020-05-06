#include <iostream>

using namespace std;

int main (){
    float radio, radioCuadrado, area, perimetro;
    cout<<"Ingrese el radio del circulo: ";
    cin>> radio;
    // Procedo a hacer el area del circulo con la formula Pi*(r)^2 y declaro la constante de PI
    float pi = 3.14159;
    // para volver a utilizar el cuadrado posteriormente utilizo radio cuadrado para efectuar el proceso del area por aparte
    radioCuadrado = radio;
    // Elevo al cuadrado multiplicando por el mismo termino
    radioCuadrado *= radioCuadrado;
    // Ahora multiplico Pi por el radio al cuadrado obteniedo el valor del area
    area = pi*radioCuadrado;
    // Ahora que tengo el area procedo a calcular el perimetro  con la formula 2*Pi*r
    perimetro=2*pi*radio;
    cout<<"El area del circulo es: "<< area <<" y su perimetro es: "<< perimetro <<endl;
    return 0;
}