#include<iostream>

using namespace std;

void mediaEstaturas(float arreglo[], float *media);    //Declaramos la funcion que calculara la media de las medidas
void sobreBajoMedia(float arreglo[], int *arribaMedia, int *debajoMedia, float); //Declaramos la funcion que calculara cuantas estaturas estan arriba y debajo de la media

int main (){
    float promedio, estatura; //Declaramos la variable promedio donde se guardara el promedio de estaturas y estatura para llenar el arreglo estaturas
    float estaturas[25];    //Declaramos el arreglo para las 25 estaturas
    int arribaMedia = 0, debajoMedia = 0;   //En estas variables guardaremos cuantas estaturas estan debajo y sobre la media
    cout<<"Ingrese la estatura de los 25 alumnos\n"<<endl;

    for (int i = 0; i < 25; i++)    //Usamos un lazo para llenar el arreglo
    {
        cout<<"Ingrese la estatura del alumno "<<(i+1)<<": ";
        cin>>estatura;  //Pedimos las 25 estaturas
        estaturas[i]= estatura; //Llenamos estatura por estatura el arreglo
    }
    mediaEstaturas(estaturas, &promedio);  //Invocamos a la funcion para la media de estaturas y mandamos como parametros el arreglo y la direccion de la variable promedio
    cout<<"\nLa media de las estaturas es de "<<promedio<<endl;   //Obteniendo el valor de la media por referencia desplegamos su valor
    sobreBajoMedia(estaturas, &arribaMedia, &debajoMedia, promedio);    //Llamamos a la funcion que calcula cuantas estaturas estan sobre y bajo la media;
    cout<<"Hay "<<arribaMedia<<" estaturas arriba de la media"<<endl;   //La funcion devuelve los valores a traves de punteros y desplegamos los valores
    cout<<"Y "<<debajoMedia<<" estaturas debajo de la media"<<endl;
}
//A traves de esta funcion calculamos la media o promedio de estaturas
void mediaEstaturas(float arreglo[], float *media ){    //Pedimos como argumentos el arreglo de estaturas y la direccion de la variable donde se guarda la media
    for (int i = 0; i < 25; i++)    //Creamos un lazo que se repite 25 veces donde sumaremos las 25 estaturas
        *media += arreglo[i];   //Sumamos las 25 estaturas
    *media/=25; //Dividimos entre 25 y de esa forma atraves de un puntero se recibira el valor de la media de las estaturas
}
// A traves de esta funcion calculamos cuantas estaturas estan sobre la media y debajo de la media
void sobreBajoMedia(float arreglo[], int *arribaMedia, int *debajoMedia, float promedio){   //Tomamos como argumentos la media, el arreglo y la direccion de las variables donde se almacenaran los valores
    for (int i = 0; i < 25; i++)    //Creamos un lazo que recorrera las 25 edades
    {
        if (arreglo[i]>promedio)    //Si la estatura es mayor a la media entonces se aumentara un valor en la cantidad de estaturas arriba de la media
            *arribaMedia+=1;
        else
            *debajoMedia+=1;    //Sino se aumentara un valor en la cantidad de estaturas debajo de la media
    }   //Todos los valores que han sido manipulados en los punteros son almacenados en las variables a las que estos apuntaron
}