#include <iostream>
#include <time.h>

using namespace std;
 
int main (){
int hora,minutos,segundos;
time_t tiempoActual = time(NULL);
struct tm horaActual = *localtime(&tiempoActual);
hora= horaActual.tm_hour;
minutos = horaActual.tm_min;
segundos = horaActual.tm_sec;

cout<<"\nLa hora actual es: ";
if (hora<=9)   cout<<"0";
cout<<hora<<":";
if (minutos<=9)   cout<<"0";
cout<<minutos<<":";
if (segundos<=9)  cout<<"0";
cout<<segundos;

segundos++;
if (segundos>59)
{
   minutos++;
   segundos= 0;
   if (minutos>59)
   {
      hora++;
      minutos=0;
      if (hora>24)
         hora=0;  
   } 
}

cout<<"\nLa hora un segundo despues es: ";
if (hora<=9)
   cout<<"0";
cout<<hora<<":";
if (minutos<=9)
   cout<<"0";
cout<<minutos<<":";
if (segundos<=9)
   cout<<"0";
cout<<segundos;

   return 0;
}