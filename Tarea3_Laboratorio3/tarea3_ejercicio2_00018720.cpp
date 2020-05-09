#include <iostream>
#include <math.h>

using namespace std;

int main (){
    float radio,area,perimetro;
    float pi = 3.14159;
    cout<<"Ingrese el radio del circulo: ";
    cin>> radio;
    // Utilizamos la formula PI*(r)^2
    area = pi*(pow(radio,2));
    perimetro=2*pi*radio;
    cout<<"El area del circulo es: "<< area <<" y su perimetro es: "<< perimetro <<endl;
    return 0;
}