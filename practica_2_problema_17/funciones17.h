#ifndef FUNCIONES17_H
#define FUNCIONES17_H
#include <iostream>
using namespace std;

int buscar_amigos(int n, int limite){
    int suma = 0, suma2 = 0, suma_total = 0;
    for (int i = 1; i <= n/2;i++){
        if (n%i == 0){
            suma = suma + i;
        }
    }
    for (int j = 1; j <= suma/2;j++){
        if (suma%j == 0){
            suma2 = suma2 + j;
        }
    }
    if (n == suma2 && n < suma && suma < limite){
        cout << suma << " y " << suma2 << " son amigos y su suma = " << suma+suma2 << "\n";
        suma_total = suma+suma2;
    }
    return suma_total;
}
#endif // FUNCIONES17_H
