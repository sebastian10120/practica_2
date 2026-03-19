#include <iostream>

using namespace std;

bool comprobar_solo_numerico(char a[], int largo);
int longitud_linea(char a[]);
void suma_de_n(char a[], int n,int largo);
int convertir_a_entero(char a[], int largo);

int main()
{
    int tamano = 150, tamano_nuevo,n_nuevo,n_tamano;
    bool comprobacion_numerica, comprobacion_n;
    char numero[tamano],n[tamano];
    cout << "ingrese el numero a evaluar" << endl;
    cin.getline(numero,tamano);
    tamano_nuevo = longitud_linea(numero);
    cout << "ingrese el numero con el que se evaluara" << endl;
    cin.getline(n,tamano);
    n_tamano = longitud_linea(n);
    comprobacion_numerica = comprobar_solo_numerico(numero,tamano_nuevo);
    comprobacion_n = comprobar_solo_numerico(n,n_tamano);
    if (comprobacion_numerica == false || comprobacion_n == false){
        cout <<  "valor invalido";
    }
    else {
        n_nuevo = convertir_a_entero(n,n_tamano);
        suma_de_n(numero, n_nuevo, tamano_nuevo);
    }
}
