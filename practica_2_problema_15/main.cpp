#include <iostream>

using namespace std;
void valores_cuadrado(int cuadrado[4]);
void cuadrado_intercepto(int a[4],int b[4], int c[4]);
void imprimir_cuadrado(int a[4], int numero);
int main()
{
    int cuadrado1[4]{}, cuadrado2[4]{},cuadrado3[4]{};
    cout << "ingresar valores cuadrado 1 \n";
    valores_cuadrado(cuadrado1);
    cout << " ingrese los datos del cuadrado 2\n";
    valores_cuadrado(cuadrado2);
    cuadrado_intercepto(cuadrado1,cuadrado2,cuadrado3);
    imprimir_cuadrado(cuadrado1,1);
    imprimir_cuadrado(cuadrado2,2);
    imprimir_cuadrado(cuadrado3,3);
}
