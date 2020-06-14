#include "iostream"
using namespace std;

int calcularMCD(int mayor, int menor){
    int residuo;
    do
    {
        residuo = mayor%menor;
        if (residuo!=0)
        {
            mayor=menor;
            menor=residuo;
        }
    } while (residuo!=0);

    return menor;
}

int main(){
    int nmayor,nmenor;
    cout<<"Ingrese el numero mayor: ";
    cin>>nmayor;
    cout<<"Ingrese el numero menor: ";
    cin>>nmenor;
    cout<<"El MCD de "<<nmayor<<" y "<<nmenor<<" es: "<<calcularMCD(nmayor,nmenor);
    return 0;
}