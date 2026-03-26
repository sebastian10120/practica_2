#include <iostream>

using namespace std;
int buscar_amigos(int n, int limite);

int main()
{
    int numero,suma_amigos = 0;
    cout << "ingrese un numero: ";
    cin >> numero;
    if(numero <= 0){
        cout << "suma: 0, no tiene amigos";
    }
    else if (numero>0){
        for (int a = 1; a < numero;a++){
            suma_amigos = suma_amigos + buscar_amigos(a, numero);
        }
    }
    cout << "suma de los amigos = " << suma_amigos;
}

