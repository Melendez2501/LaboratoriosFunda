#include "iostream"
using namespace std;

//Utilizamos el codigo de una funcion utillizada anteriormente en un ejercicio
bool anioBisiesto(int anio){
    if ((anio%400)==0)
        return true;
    else if ((anio%4)==0 && (anio%100)!=0)
        return true;
    else
        return false;
}


int main(){
    int dia, mes, anio;
    //Usaremos un booleano para permitir saber los datos si la fecha es correcta
    //En dado caso si la fecha es correcta el nuevo valor sera true
    bool fechaCorrecta = false;
    cout<<"Introduzca el dia en digitos: "; 
    cin>>dia;
    cout<<"Introduzca el mes en digitos: ";
    cin>>mes;
    cout<<"Introduzca el a\244o: ";
    cin>>anio;
    
    if (anio>=1) //Validamos que el año sea correcto
    {
        // Validamos el mes
        switch (mes)
        {
            /*Si el numero del mes pertenece a uno de estos el mes debe tener 31 dias
            Y se ejecutara el codigo siguiente*/
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                //Validamos el dia
                //Si el dia no se encuentra en rango, el codigo no se ejecutara    
                if (dia>=1 && dia<=31){ 
                    fechaCorrecta=true;
                    dia++;
                    if (dia>31){
                        dia=1; mes++; // Solo en esta seccion de codigo el mes puede incrementar a 13 y cambiar de año
                        if (mes>12){
                            mes=1; anio++;
                        }
                    }
                }
                break;
                
            case 4: case 6: case 9: case 11:    //Estos meses tienen 30 dias
                if (dia>=1 && dia<=30) //Si el dia no se encuentra en rango, el codigo no se ejecutara y se pasara a error de digitacion
                {
                    fechaCorrecta=true; dia++;
                    if (dia>31){
                        dia=1; mes++;
                    }
                }
                break;

            case 2: //Febrero puede tener 29 dias si es bisiesto o 28 si no lo es
                if ((anioBisiesto(anio))==true && dia>=1 && dia<=29) //Si la condicion no se cumple pasa al siguiente else if
                {
                    fechaCorrecta=true; dia++;
                    if (dia>29){
                        dia=1; mes++;
                    }
                }
                else if (dia>=1 && dia<=28){    //Si el dia no se encuentra en rango, el codigo no se ejecutara y se pasara a error de digitacion
                    fechaCorrecta=true; 
                    dia++;
                    if (dia>28){
                        dia=1; mes++;
                    }
                } 
                break;
        }   
    }

    if (fechaCorrecta==true) //Si la fecha fue validada y calculada se muestra el siguiente codigo
        cout<<"La fecha del siguiente dia es: "<<dia<<"/"<<mes<<"/"<<anio;
    else  //Si algun dato esta mal luego de verificar que no este en lo correcto el codigo correra directamente hasta aqui
        cout<<"Error de digitacion";
    return 0;
}