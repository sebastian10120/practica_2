#ifndef LIBRERIA_PROBLEMA_5_H
#define LIBRERIA_PROBLEMA_5_H
bool comparacion_cadena(char a[], char b[], int entero){
    for(int i = 0; i <= entero; i++){
        if (a[i] != b[i]){
            return false;
        }
    }
    return true;
}
int longitud_linea(char a[]) {
    int i = 0;
    while(a[i] != '\0') {
        i++;
    }
    return i - 1;
}
#endif // LIBRERIA_PROBLEMA_5_H
