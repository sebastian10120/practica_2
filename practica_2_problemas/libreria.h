#ifndef LIBRERIA_H_H
#define LIBRERIA_H_H
int no_negativo(int a){
    if (a < 0){
        a = 0;
    }
    return a;
}
int division(int a,int b){
    long int c = a/b;
    return c;
}
int modulo(int a,int b){
    long int c = a%b;
    return c;
}
#endif // LIBRERIA_H_H
