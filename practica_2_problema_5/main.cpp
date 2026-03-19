#include <iostream>
#include "libreria_problema_5.h"
using namespace std;
int longitud_linea(char a[]);
bool comparacion_cadena(char a[], char b[], int entero);

int main()
{
    int longitud = 150,longitud_a,longitud_b;
    char a[longitud], b[longitud];
    bool comprobar;
    cout << "ingrese la primera cadena: ";
    cin.getline(a,longitud);
    cout << endl << "ingrese la segunda cadena: ";
    cin.getline(b,longitud);
    longitud_a = longitud_linea(a);
    longitud_b = longitud_linea(b);
    if (longitud_a == longitud_b){
        comprobar = comparacion_cadena(a,b,longitud_a);
        if ( comprobar == true){
            cout << "ambas son iguales";
        }
        else{
            cout << "ambas son diferentes";
        }
    }
    else {
        cout << "ambas son diferentes";
    }
}
