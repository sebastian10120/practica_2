#include <iostream>
#include "libreria.h"
using namespace std;

int division(int a,int b);
int modulo(int a,int b);
void problema_1();

int main()
{
    problema_1();
}
void problema_1(){
    int list[10]= {50000,20000,10000,5000,2000,1000,500,200,100,50};
    long int cantidad_a_ingresar, cantidad;
    cout << "ingrese la cantidad a pagar: ";
    cin >> cantidad_a_ingresar;
    cout <<endl;
    for (int i = 0; i< sizeof(list)/sizeof(list[0]);i++ ){
        cantidad = division(cantidad_a_ingresar, list[i]);
        cantidad_a_ingresar = modulo(cantidad_a_ingresar,list[i]);
        cout << list[i] << " : " << cantidad << endl;
    }
    cout << "falta : " << cantidad_a_ingresar;
}

