#include <iostream>

using namespace std;

int main()
{
    int contador = 0, contador_i = 0, contador_y = 0,numero;
    char arreglo_char[20],arreglo_resultado[20];
    char *i = NULL;
    char *y = NULL;
    i = arreglo_char;
    y = arreglo_resultado;
    cout << "ingrese un numero: ";
    cin >> numero;
    if (numero> 0){
        do{
            *(i+contador) = (numero%10) + '0';
            numero = numero/10;
            contador++;
        }
        while(numero>0);
        contador_i = contador-1;

        while (contador_i >= 0){
            *(y+contador_y) = *(i + contador_i);
            contador_y++;
            contador_i--;
        }
        for (int a = 0; a <= contador_y-1;a++){
            cout << *(y+a);
        }
    }
    else{
        cout << '-';
        numero = numero*-1;
        do{
            *(i+contador) = (numero%10) + '0';
            numero = numero/10;
            contador++;
        }
        while(numero>0);
        contador_i = contador-1;

        while (contador_i >= 0){
            *(y+contador_y) = *(i + contador_i);
            contador_y++;
            contador_i--;
        }
        for (int a = 0; a <= contador_y-1;a++){
            cout << *(y+a);
        }
    }
    return 0;
}
