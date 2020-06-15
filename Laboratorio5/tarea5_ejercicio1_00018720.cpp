#include "iostream"
using namespace std;

//Creamos una funcion que retorne el MCD de dos numeros como entero utilizando el metodo de Euclides
int calcularMCD(int numero1, int numero2){ //Agregamos los parametros
    int residuo, mayor, menor;
    if (numero1>numero2){   //Asignamos valores a las variables mayor(numero mayor) y menor (numero menor)
        mayor= numero1;
        menor= numero2;
    }
    else
    {
        mayor= numero2;
        menor= numero1;
    }
    
    do  //Realizamos el calculo del MCD hasta que el residuo sea 0, de ser asi el MCD sera el valor de la variable menor
    {
        residuo = mayor%menor;
        if (residuo!=0)
        {
            mayor=menor;
            menor=residuo;
        }
    } while (residuo!=0);

    return menor;   //Devolvemos el valor del MCD
}

int main(){
    int num1,num2;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    cout<<"El MCD de "<<num1<<" y "<<num2<<" es: "<<calcularMCD(num1,num2);
    return 0;
}