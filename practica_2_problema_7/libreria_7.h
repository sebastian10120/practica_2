#ifndef LIBRERIA_7_H
#define LIBRERIA_7_H
#include <iostream>
using namespace std;
void imprimir_uno(char lista_entrada[],int longitud){
    char datos_no_repetidos[128];
    int contador = 0;
    for(int a = 0; a < longitud; a++){
        bool repetido = false;
        for (int b = 0; b <= contador; b++){
            if (lista_entrada[a] == datos_no_repetidos[b]){
                repetido = true;
                break;
            }
        }
        if (repetido == false){
            if (lista_entrada[a] != ' '){
                datos_no_repetidos[contador] = lista_entrada[a];
                std::cout << lista_entrada[a];
                contador++;
            }
            else{
                cout << lista_entrada[a];
            }
        }
    }
}
int longitud_linea(char a[]) {
    int i = 0;
    while(a[i] != '\0') {
        i++;
    }
    return i;
}

#endif // LIBRERIA_7_H
