#include <iostream>
using namespace std;

void asignar_valores(char **arreglo, int filas, int columnas);
void imprimir_filas(char **arreglo, int filas, int columnas);
void reservar_asiento(char **arreglo, int filas, int columnas);
void liberar_matriz(char **arreglo, int filas);
int main()
{
    int filas = 15;
    int asientos = 20;
    char **filas_disponibles = new char*[filas];
    bool reserva_asientos = true;
    for(int i = 0; i < filas; i++){
        filas_disponibles[i] = new char[asientos]();
    }
    asignar_valores(filas_disponibles,filas,asientos);
    reservar_asiento(filas_disponibles,filas,asientos);
    imprimir_filas(filas_disponibles,filas,asientos);
    liberar_matriz(filas_disponibles,filas);
}
