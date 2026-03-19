#include <iostream>
#include "libreria_7.h"
using namespace std;
void imprimir_uno(char lista_entrada[],int longitud);
int longitud_linea(char a[]);


int main(){
    int longitud = 250,longitud_nueva;
    char entrada[longitud];
    cout << "escriba un mensaje: ";
    cin.getline(entrada,longitud);
    longitud_nueva = longitud_linea(entrada);
    imprimir_uno(entrada,longitud_nueva);
}
