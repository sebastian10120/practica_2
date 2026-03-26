#include <iostream>

using namespace std;
void calcular_estrella(int **matriz, int filas, int columnas);

int main()
{
    int filas = 6;
    int columnas = 8;
    int **matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }
    int valores[6][8] ={
        {0,3,4,0,0,0,6,8},
        {5,13,6,0,0,0,2,3},
        {2,6,2,7,3,0,10,0},
        {0,0,4,15,4,1,6,0},
        {0,0,7,12,6,9,10,4},
        {5,0,6,10,6,4,8,0}
    };
    for (int fila = 0; fila < filas;fila++){
        for (int columna = 0; columna < columnas;columna++){
            matriz[fila][columna] = valores[fila][columna];
        }
    }
    calcular_estrella(matriz,filas,columnas);
    for (int i = 0; i < filas; i++)
        delete[] matriz[i];
    delete[] matriz;

    return 0;
}
