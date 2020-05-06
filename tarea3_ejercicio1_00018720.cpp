#include <iostream>

using namespace std;

int main (){
    int numero1,numero2,numero3,promedio;
    cout<<"Ingrese los 3 numeros a promediar"<<endl;
    cin >> numero1 >> numero2 >> numero3;
    promedio = (numero1+numero2+numero3)/3;
    cout<<"El promedio de los 3 numeros es: "<< promedio << endl;
    return 0;
}