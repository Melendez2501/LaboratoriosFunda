#include <iostream>
#include <iomanip>
using namespace std;

//Creamos una funcion para calcular el salario total
float salariosTotal(float horasTrabajadas, float extras)  //Los argumentos son las horas trabajadas y las horas extras
{
    horasTrabajadas*=1.75;  //Calculamos la cantidad de dinero por horas trabajadas y extras
    extras*=2.50;
    return horasTrabajadas+extras; //Retornamos la suma de dinero de las horas trabajadas y extras
}

//Creamos una funcion para el salario con los descuentos, el argumento es el salario total
float salariosReal(float total) 
{   
    double seguroSocial= 0.04, afp= 0.0625, impuestoSobreRenta=0.1; //Le damos los valores de porcentaje a las variables
    seguroSocial*=total;    //Obtenemos el porcentaje del seguro social = total * seguroSocial
    afp*=total; //Obtenemos el porcentaje del afp= total * afp
    if (total>500)  //Este bloque de codigo solo sera ejecutado al tener un salario mayor de 500
    {
        impuestoSobreRenta*=total;  //Calculamos el impuesto sobre renta = impuestoSobreTenta * total
        total-=impuestoSobreRenta;  //Restamos el impuesto sobre renta al salario total
    }   //Nota: Hacemos la resta sobre el impuesto y el total dentro del if ya que no todos seran mayores a 500
    total=total-seguroSocial-afp;   //Realizamos los descuentos al salario total
    return total;   //Devolvemos el salario con los descuentos
    
}

int main(){
    float horaTrabajada, horaExtra, salarioTotal,salarioReal; //Declaramos variables para las horas y salarios
    int empleados;  //Usaremos esta variable para pedir el numero de empleados
    cout<<"Ingrese la cantidad de empleados a quienes se les calculara su salario: ";
    cin>>empleados;
    for (int i= 1; i<=empleados; i++) //Realizamos un bucle que se repetira hasta llegar a la cantidad de empleados ingresada
    {
        cout<<"\nIngrese las horas trabajadas: ";
        cin>>horaTrabajada; //Guardamos las horas trabajadas
        cout<<"Ingrese las horas extra: ";
        cin>>horaExtra; //Guardamos las horas extras
        //Mandamos las horas a la funcion como parametros y retornara el salario que se guardara en la variable salarioTotal
        salarioTotal=salariosTotal(horaTrabajada,horaExtra);
        salarioReal=salariosReal(salarioTotal);
        //Al haber obtenido el salario, lo mandamos como parametro a la funcion y retornara el salario con descuento en la variable salarioReal 
        cout<<"El salario total del empleado "<<i<<" es: $"<<fixed<<setprecision(2)<<salarioTotal; //Mostramos salario total redondeado a 2 decimales
        cout<<"\nY su salario real es: $"<<fixed<<setprecision(2)<<salarioReal<<endl; //Mostramos salario real redondeado a 2 decimales
        //Mostramos el salario total y con descuentos del usuario ingresado y volvemos al inicio del bucle hasta llegar a la cantidad de empleados
    }
    
    return 0;
}