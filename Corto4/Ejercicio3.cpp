#include <iostream>
using namespace std;
//Declaramos la funcion para llenar la matriz con las notas de los estudiantes
void llenarMatriz(float matriz[][5], int);

//Declaramos la funcion para calcular la nota final de los estudiantes y si pasaron curso
void notaFinal(float matriz[][5], int);

int main(){
    int cantidadEstudiantes=0; //Declaramos una variable para guardar el numero de estudianntes que sera el numero de filas
    cout<<"Ingrese el numero de estudiantes: ";
    cin>>cantidadEstudiantes;
    cout<<"\n";
    float notas[cantidadEstudiantes][5]; // Declaramos la matriz con la cantidad de estudiantes como filas y 5 columnas que seran las notas
    llenarMatriz(notas,cantidadEstudiantes); //Pasamos la matriz como argumento y el numero de filas
    notaFinal(notas,cantidadEstudiantes); //Ya con los datos en la matriz calculamos la nota final, la mostramos y tambien mostramos si paso el curso
    return 0;
}

//Creamos la funcion y tomamos como parametro la matriz y la cantidad de estudiantes como numero de filas
void llenarMatriz(float matriz[][5], int cantidad){
    float nota; //Creamos esta variable para recibir las notas y añadirlas a la matriz
    for (int alumno = 0; alumno < cantidad; alumno++)  //Creamos un lazo para las filas que llegara hasta que el contador llene todas las filas
    {
        for (int calificacion = 0; calificacion < 5; calificacion++) //Creamos un lazo dentro de otro para llenar las columnas de la fila donde ingresaremos la notas
        {   //Le decimos que sea menor a 5 ya que la matriz empieza en la posicion 0 e ingresara las 5 notas
            cout<<"Ingrese la nota "<<(calificacion+1)<<" del estudiante "<<(alumno+1)<<": ";
            cin>>nota;  //Tomamos la nota 
            matriz[alumno][calificacion]= nota;  //La guardamos en X columna de su respectiva fila
        }   //Ahora pasa a recibir las siguientes notas de siguientes estudiantes hasta terminar con el ultimo estudiante
        cout<<"\n";
    }
}
//Creamos la funcion para calcular la nota final de los estudiantes y desplegar si aprobaron o no
void notaFinal(float matriz[][5], int cantidad){    //Pedimos como argumento
    float final;    //Declaramos una variable donde calcularemos la nota final de cada estudiante
    for (int alumno = 0; alumno < cantidad; alumno++)   //Hacemos dos lazos para recorrer la matriz
    {
        for (int calificacion = 0; calificacion < 5; calificacion++)
        {
            final+=((matriz[alumno][calificacion])*0.2);    //En esta seccion del lazo guardaremos la suma de las 5 notas ponderadas
        }
        cout<<"La nota final del estudiante "<<(alumno+1)<<" es: "<<final<<endl;    //Desplegamos la nota final
        if (final>=6)   //Si la nota final es mayor a 6 desplegara un mensaje diciendo que aprobo el curso
            cout<<"El estudiante aprobo el curso"<<endl<<endl;
        else    //Si su nota es menor a 6 mostrara este mensaje
            cout<<"El estudiante reprobo el curso"<<endl<<endl;
        final=0;    //Dejamos la variable con valor 0 ya que repetira el mismo procedimiento para la todos los estudiantes
    }
}