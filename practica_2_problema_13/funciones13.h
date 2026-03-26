#ifndef FUNCIONES13_H
#define FUNCIONES13_H
#include <iostream>
using namespace std;
void calcular_estrella(int **matriz, int filas, int columnas){
    float valor_probatorio, estrellas = 0;
    for (int fila = 1; fila < filas-1;fila++){
        for (int columna = 1; columna < columnas-1;columna++){
            valor_probatorio = (*(*(matriz + fila) + columna) + *(*(matriz + fila - 1) + columna) + *(*(matriz + fila + 1) + columna) + *(*(matriz + fila) + columna + 1) + *(*(matriz + fila) + columna - 1)) / 5.0;
            if (valor_probatorio > 6){
                estrellas++;
            }

        }
    }
    cout << "estrellas: " << estrellas;
}

#endif // FUNCIONES13_H
