#include "iostream"
using namespace std;

void leerArreglo(int arreglo[], int longitud){
    int valor;
    for (int i = 0; i <= (longitud-1); i++)
    {
        cout<<"Ingrese el valor de la posicion "<<i<<": ";
        cin>>valor;
        arreglo[i]=valor;
    }
    
}

void sumaArreglos(int arregloN1[], int arregloN2[], int arregloN3[], int longitud){
    for (int i = 0; i <=(longitud-1); i++)
    {
        arregloN3[i]= (arregloN1[i]+arregloN2[i]);
    }
}

void desplegarResultado(int sumaArreglos[], int longitud){
    cout<<"\nEl resultado de la suma de los dos arreglos en cada elemento es: "<<endl;
    for (int i = 0; i <=(longitud-1); i++)
    {
        cout<<"El resultado de la suma de ambos arreglos en la posicion "<<i<<" es "<<sumaArreglos[i]<<endl;
    }
    
}

int main(){
    int longitud;
    cout<<"Digite la cantidad de elementos que tendran los arreglos: ";
    cin>>longitud;
    int arreglo1[longitud];
    cout<<"\nDigite los elementos del primer arreglo"<<endl;
    leerArreglo(arreglo1,longitud);
    int arreglo2[longitud];
    cout<<"\nDigite los elementos del segundo arreglo"<<endl;
    leerArreglo(arreglo2,longitud);
    int arreglo3[longitud];
    sumaArreglos(arreglo1, arreglo2, arreglo3, longitud);
    desplegarResultado(arreglo3, longitud);
    return 0;
}

