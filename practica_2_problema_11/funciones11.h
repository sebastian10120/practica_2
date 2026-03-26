#ifndef FUNCIONES11_H
#define FUNCIONES11_H
#include <iostream>
using namespace std;
void asignar_valores(char **arreglo, int filas, int columnas){
    int numero_fila = 0;
    for  (int fila = 0; fila < filas; fila++,numero_fila++){
        arreglo[fila][0] = 97 + numero_fila;
        for (int columna = 1; columna < columnas; columna++){
            arreglo[fila][columna] = '-';
        }
    }
}
void imprimir_filas(char **arreglo, int filas, int columnas){
    char letra_fila = 97;
    for (int fila = 0; fila < filas; fila++){
        cout << "|" << (char)('a' + fila)<< "|";
        for (int columna = 1; columna < columnas; columna++){
            cout << arreglo[fila][columna] << "|";
        }
        cout << endl;
    }
}
void reservar_asiento(char **arreglo, int filas, int columnas){
    bool reserva = true;
    int fila_letra = -1;
    char *puntero;
    do{
        char charlos[30] = {};
        imprimir_filas(arreglo,filas,columnas);
        cout << "escriba la letra de la fila o 0 para salir: ";
        cin >> charlos;
        puntero = charlos;
        if ( *puntero == '0'){
            reserva = false;
        }
        else if ('a' <= *puntero && ('a'+filas) >= *puntero){
            bool reserva_columna = true;
            for(int fila = 0; fila < filas; fila++){
                if (arreglo[fila][0] == *puntero){
                    fila_letra = fila;
                    break;
                }
            }
            do {
                int charlos_columna = -1;
                imprimir_filas(arreglo,filas,columnas);
                cout << "escriba el numero de la fila a reservar o quitar reserva o 0 para volver: ";
                cin >> charlos_columna;
                if (charlos_columna == 0){
                    reserva_columna = false;
                }
                else if (0 < charlos_columna && charlos_columna < columnas){
                    if (arreglo[fila_letra][charlos_columna] == '-'){
                        arreglo[fila_letra][charlos_columna] = '+';
                        reserva_columna = false;
                    }
                    else if (arreglo[fila_letra][charlos_columna] == '+'){
                        arreglo[fila_letra][charlos_columna] = '-';
                        reserva_columna = false;
                    }
                }
            }
            while(reserva_columna == true);
        }

    }
    while (reserva == true);
}
void liberar_matriz(char **arreglo, int filas){
    for(int i = 0; i < filas; i++){
        delete[] arreglo[i];
    }
    delete[] arreglo;
}

#endif // FUNCIONES11_H
