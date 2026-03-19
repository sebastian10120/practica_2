#ifndef LIBRERIA_9_H
#define LIBRERIA_9_H
#include <iostream>
using namespace std;
bool comprobar_solo_numerico(char a[], int largo){
    char numeros[10] = {'1','2','3','4','5','6','7','8','9','0'};
    for (int i = 0; i < largo; i++){
        bool es_numero = false;
        for (int n = 0; n < 10;n++){
            if (a[i] == numeros[n]){
                es_numero = true;
            }
        }
        if (es_numero == false){
            return false;
        }
    }
    return true;
}
int longitud_linea(char a[]) {
    int i = 0;
    while(a[i] != '\0') {
        i++;
    }
    return i;
}
void suma_de_n(char a[], int n,int largo){
    int contador = 0, posicion = 1, sumando=0,suma=0, char_a_int;
    for (int caracter = largo-1; caracter >= 0;caracter-- ){
        char_a_int = a[caracter] - '0';
        sumando =sumando+((char_a_int)*posicion);
        contador++;
        posicion = posicion*10;
        if (contador == n){
            if (caracter > 0){
                contador = 0;
                posicion = 1;
                suma = suma + sumando;
                cout << sumando << " + ";
                sumando = 0;
            }
            else{
                contador = 0;
                cout << sumando;
            }
        }
    }
    if (contador > 0){
        cout << sumando;
        suma = suma +sumando;
    }
    cout << " = " << suma;
}
int convertir_a_entero(char a[], int largo){
    int numero = 0;

    for(int i = 0; i < largo; i++){
        numero = numero * 10 + (a[i] - '0');
    }

    return numero;
}

#endif // LIBRERIA_9_H
