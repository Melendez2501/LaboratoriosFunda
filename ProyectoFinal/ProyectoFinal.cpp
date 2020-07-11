#include <iostream>

using namespace std;

const int longCad = 20; //Declaramos el valor constante.

struct costoPorArticulo // Declaramos la estructura.
{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

//Declaramos las funciones que se utilizaran que reciben como parametro un arreglo de estructuras y un entero.
void leerArticulo(costoPorArticulo [], int);
void costoArticulo(costoPorArticulo [], int);
void desplegarArt(costoPorArticulo [], int);
float montoTotal(costoPorArticulo [], int);


int main(){
    int cantidadArt;    //En esta variable guardaremos la cantidad de articulos que tendra el arreglo de estructuras
    cout<<"Ingrese la cantidad de articulos a agregar a su compra: ";
    cin>>cantidadArt;
    costoPorArticulo arregloArt[cantidadArt];   //Declaramos el arreglo de estructuras dandole la cantidadArt como la cantidad de estructuras que contendra el arreglo
    leerArticulo(arregloArt,cantidadArt);   //Mandamos el arreglo y la cantidad como argumentos para leer los datos de los articulos
    costoArticulo(arregloArt,cantidadArt);  //Llamamos a la funcion que calculara el costo de los articulos
    desplegarArt(arregloArt, cantidadArt);  //Llamamos a la funcion que desplegara los datos de los articulos
    cout<<"\nCosto total: $"<<(montoTotal(arregloArt, cantidadArt)); //Desplegamos el valor que retorna la funcion montoTotal que es el costo total de la compra
    return 0;
}

//Creamos la funcion que leera los datos de cada articulo
void leerArticulo(costoPorArticulo arreglo[], int cant){    //Declaramos los parametros de la funcion, el primer parametro es el arreglo de estructuras donde se guardaran los datos de los articulos, el segundo es la longitud del arreglo
    for (int i = 0; i < cant; i++)  //Creamos un for que leera los datos de un articulo y se repetira hasta llenar los N articulos que el usuario ingresara
    {
        cin.ignore(100,'\n');  //Utilizamos esta funcion para liberar el buffer
        cout<<"\nIngrese el nombre del articulo "<<(i+1)<<": ";
        cin.getline(arreglo[i].nombreArticul, 21, '\n');    //Mediante un getline guardaremos el nombre del articulo en el arreglo de caracteres dentro de la posicion i del arreglo de estructuras
        cout<<"Ingrese el precio unitario del producto: $";
        cin>>arreglo[i].precio; //Guardamos el precio unitario del articulo en la posicion i
        cout<<"Ingrese la cantidad a comprar del articulo: ";
        cin>>arreglo[i].cantidad; //Guardamos la cantidad que se llevara del articulo en la posicion i que se encuentre
    }   
}

//Creamos la funcion donde calcularemos el costo por articulo
void costoArticulo(costoPorArticulo arreglo[], int cant){   //Asi en esta como en la anterior y las siguientes se necesitaran los mismos parametros
    for (int i = 0; i < cant; i++)  //Recorremos y calculamos el costo por articulo utilizando un for
        arreglo[i].costoPorArticulo = ((arreglo[i].precio)*(arreglo[i].cantidad));  //En su respectiva posicion calculamos el costoPorArticulo multiplicando su respectivo precio y cantidad
}   //El for terminara una vez se haya recorrido todo el arreglo

//Creamos la funcion para desplegar el contenido de todos los articulos
void desplegarArt(costoPorArticulo arreglo[], int cant){
    cout<<"\n***Contenido de la compra***"<<endl;   //En este caso lo mostramos como una facturacion
    for (int i = 0; i < cant; i++)  //Recorremos el arreglo utilizando un for
    {   //Desplegamos lo siguiente: 
        cout<<"\nArticulo "<<(i+1)<<": "<<arreglo[i].nombreArticul<<endl;//Nombre del articulo
        cout<<"Precio c/u: $"<<arreglo[i].precio<<endl; //Su respectivo Precio unitario
        cout<<"Cantidad: "<<arreglo[i].cantidad<<endl;  //La cantidad que se esta comprando del articulo
        cout<<"Costo por articulo: $"<<arreglo[i].costoPorArticulo<<endl;   //Y el costo total del articulo
    }   //Se repite el proceso hasta terminar con todos los articulos dentro del arreglo
}

//Creamos la funcion donde calcularemos el costo total de la compra
float montoTotal(costoPorArticulo arreglo[], int cant){
    float total = 0; //Declaramos la variable total en la cual nosotros iremos almacenando todos los costos sumados
    for (int i = 0; i < cant; i++) //Recorremos el arreglo con un for para sumar todos los costos de los articulos   
        total+= arreglo[i].costoPorArticulo; //Sumamos todos los costos por articulo
    return total;   //Retornamos la suma de estos en la variable total como tipo float para ser desplegada desde main
}