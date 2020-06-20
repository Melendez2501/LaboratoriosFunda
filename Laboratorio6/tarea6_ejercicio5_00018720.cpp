#include "iostream"
using namespace std;

int main(){
    
    int arreglo[100];
    for (int i = 0; i <=99; i++)
    {
        arreglo[i]= ((2*i) + 1);
    }

    for (int reversa = 99; reversa>=0; reversa--)
    {
        cout<<(arreglo[reversa])<<endl;
    }
    
    return 0;
}