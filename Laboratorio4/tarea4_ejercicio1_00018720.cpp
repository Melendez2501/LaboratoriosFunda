#include <iostream>

using namespace std;

int main (){
    int dividendo,divisor;
    cout<<"Ingrese el numero a ser dividendo: ";
    cin>>dividendo;
    cout<<"Ingrese el numero a ser divisor: ";
    cin>>divisor;
    if ((dividendo%divisor)==0)
    {
        cout<<dividendo<<" si es divisible entre "<<divisor;
    }
    else
    {
        cout<<dividendo<<" no es divisible entre "<<divisor;
    }
    
    return 0;
}