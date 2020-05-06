#include <iostream>

using namespace std;

int main (){
    string producto;
    float cantidad, precio, total;
    cout<<"Ingrese el nombre del producto: "<<endl;
    cin>> producto;
    cout<<"Ingrese el precio del producto: "<<endl;
    cin >> precio;
    cout<<"Ingrese la cantidad comprada: "<<endl;
    cin>> cantidad;
    total= cantidad * precio;
    cout<<"El producto comprado es "<<producto<<", su precio c/u es $"<< precio <<", la cantidad comprada es de "<<cantidad<<" y el total de dinero gastado es de $"<<total<<endl; 
    return 0;
}