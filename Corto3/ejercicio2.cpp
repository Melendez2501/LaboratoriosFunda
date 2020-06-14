#include <iostream>
#include <string>

using namespace std;

//Creamos una funcion que retorne la pista despues que el usuario ingrese un numero
string mayormenor(int nsecreto, int nposible)
{
    if (nposible>nsecreto)
        return "Pista: el numero que acabas de ingresar es mayor al numero secreto";
    else
        return "Pista: el numero que acabas de ingresar es menor al numero secreto";
}

int main(){
    int posibleNumero, intentos, opcion, numeroSecreto = 43; //declaramos y asignamos un valor al numero secreto
    string pista; //Sera la variable utilizada para guardar la pista
    cout<<"Adivine el numero secreto";
    while (opcion!=2)
    {   cout<<"\n1) Probar suerte \n2) Salir";
        cout<<"\nIngrese una opcion <1-2>: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            intentos++;
            cout<<"Ingrese un numero entre 1 y 100: ";
            cin>>posibleNumero; //En esta variable asignamos a traves del usuario el posible numero a ser el numero secreto
            if (posibleNumero==numeroSecreto) //Si el numero ingresado es igual al secreto se ejecuta el bloque de codigo
            {
                cout<<"Felicidades, acabas de adivinar el numero secreto!";
                opcion=2;  //Se muestra por pantalla que el usuario ha adivinado y termina el programa
            }
            else if ((5-intentos)!=0)   //Si al usuario le quedan intentos se ejecuta el bloque de codigo
            {
                pista=mayormenor(numeroSecreto,posibleNumero);  //mandamos los valores del numero ingresado y el secreto y la funcion retornara la pista
                cout<<pista<<"\nLe quedan "<<(5-intentos)<<" intentos"<<endl; //Se muestra la pista y los intentos restantes
            }
            else {  //Si el usuario se queda sin intentos se le revelara el numero y termina el for y el programa
                cout<<"Se ha quedado sin intentos, el numero secreto es "<<numeroSecreto;
                opcion=2;
            }
            break;
            
        case 2: //Si en la opcion ingresa un 2 el programa despliega un mensaje y termina el programa
            cout<<"Juego finalizado";
            opcion=2;
            break;
            
        default:    //Si es usuario ingresa un numero fuera de la lista se muestra el mensaje
            cout<<"Opcion invalida, ingresa una de las opciones"<<endl;
            break;
        }
    }
}