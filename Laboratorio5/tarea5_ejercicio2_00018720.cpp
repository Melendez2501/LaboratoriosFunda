#include <iostream>
#include <time.h>

//Creamos esta funcion que utilizando punteros devolvera la hora un segundo despues a las variables apuntadas
void segundoMas(int& horas, int& minutos, int& segundos) //Tomamos los parametros de horas, minutos y segundos, se toma la direccion de las variables ingresadas
{
   segundos++; //Se modifica en segundos asi tambien como en la variable segundo
   if (segundos>59)
   {
      minutos++; //Se modifica en minutos asi tambien como en la variable minuto
      segundos= 0;   //Se modifica en segundos asi tambien como en la variable segundo
      if (minutos>59)
      {
         horas++; //Se modifica en horas asi tambien como en la variable hora
         minutos=0;  //Se modifica en minutos asi tambien como en la variable minuto
         if (horas>24)
            horas=0;  //Se modifica en horas asi tambien como en la variable hora
      } 
   } 
}

using namespace std;
 
int main (){
   int hora,minuto,segundo;   //declaramos las variables donde almacenaremos las horas
   string segundoDespues="\nLa hora actual es: "; //Creamos una cadena que se mostrara en la primera iteracion de for
   time_t tiempoActual = time(NULL); //Obtenemos el tiempo actual
   struct tm horaActual = *localtime(&tiempoActual); //Guardamos el tiempo en una estructura de tiempo que esta dividida en varias partes como hora,minuto,etc.
   hora= horaActual.tm_hour;  //El valor obtenido de la estructura es un entero, solicitamos el valor de la hora y guardamos en la variable
   minuto = horaActual.tm_min;   //Guardamos los minutos
   segundo = horaActual.tm_sec;  //Guardamos los segundos
   
   for (int contador = 1; contador <=2 ; contador++) //Decidi hacer un for para ahorrar codigo
   {  //En su segunda iteracion se mostrara la hora un segundo despues
      cout<<segundoDespues;   //imprimira la cadena que guardamos anteriormente
      if (hora<=9)   //Lo unico que hace es si la hora es menor o igual a 9 se le agregara un 0 para que sea ej 09: en vez de 9:
         cout<<"0";
      cout<<hora<<":";  //Imprimimos la hora
      if (minuto<=9)   //El mismo proceso con la hora sucede en este bloque
         cout<<"0";
      cout<<minuto<<":"; //Imprimimos los minutos
      if (segundo<=9)   //El mismo proceso con la hora y minutos sucede en este bloque
         cout<<"0";
      cout<<segundo; //Imprimimos los segundos
      if (contador==1){ //Si el contador esta en uno se ejecutra el bloque de codigo una sola vez
         segundoMas(hora,minuto,segundo); //Se pasan las horas, minutos y segundos y se calcula la hora un segundo despues
         segundoDespues= "\nLa hora un segundo despues es: ";  //La cadena que se imprime al inicio cambiara a ser esta y se imprimira en la segunda iteracion
         }
   }
   return 0;
}