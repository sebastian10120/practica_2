#ifndef FUNCIONES15_H
#define FUNCIONES15_H
#include <iostream>
using namespace std;
void valores_cuadrado(int cuadrado[4]){
    int x,y,ancho,largo;
    bool sel_ancho = true ,sel_largo = true;
    cout << "ingrese un numero para el eje x: \n";
    cin >> x;
    cuadrado[0] = x;
    cout << "\ningrese un numero para el eje y: \n";
    cin >> y;
    cuadrado[1] = y;
    while (sel_ancho == true){
        cout << "\ningrese un numero para el ancho: \n";
        cin >> ancho;
        if (ancho > 0){
            cuadrado[2] = ancho;
            break;
        }
        else if(ancho <= 0){
            cout << "\ndebe ser un valor diferente mayor a cero";
        }
    }
    while (sel_largo == true){
        cout << "\ningrese un numero para el ancho: \n";
        cin >> largo;
        if (largo > 0){
            cuadrado[3] = largo;
            break;
        }
        else if(ancho <= 0){
            cout << "\ndebe ser un valor diferente mayor a cero";
        }
    }
}
void cuadrado_intercepto(int a[4], int b[4], int c[4]) {
    int izquierda, derecha, arriba, abajo;

    if (a[0] > b[0]) {
        izquierda = a[0];
    } else {
        izquierda = b[0];
    }

    if (a[0] + a[2] < b[0] + b[2]) {
        derecha = a[0] + a[2];
    } else {
        derecha = b[0] + b[2];
    }

    if (a[1] > b[1]) {
        arriba = a[1];
    } else {
        arriba = b[1];
    }

    if (a[1] + a[3] < b[1] + b[3]) {
        abajo = a[1] + a[3];
    } else {
        abajo = b[1] + b[3];
    }

    if (izquierda < derecha && arriba < abajo) {
        c[0] = izquierda;
        c[1] = arriba;
        c[2] = derecha - izquierda;
        c[3] = abajo - arriba;
    }
    else {
        cout << "No hay intersección\n";
    }
}

void imprimir_cuadrado(int a[4], int numero){
    cout << "\nCuadrado " << numero << ":\n";
    cout << "x = " << a[0] << endl;
    cout << "y = " << a[1] << endl;
    cout << "ancho = " << a[2] << endl;
    cout << "largo = " << a[3] << endl;
}
#endif // FUNCIONES15_H
