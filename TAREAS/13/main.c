#include <stdio.h>
#include <stdlib.h> //vamos a poner los prptotipos de las funciones que hay que utilizar 
void imprimir(int x[], int y); //se va ahacer uso de tres funciones 
void intercambio(int *a,int *b);
void ordenar(int c[], int d);
int main(int argc, char *argv[]){
    int n[argc-1];
    for(int i=0; i<argc; i++){ //este ciclo for nos ayudara para guardar los argumentos de entrada de un arreglo
        n[i]=atoi(argv[i]);
    }
    ordenar(n,argc);
    imprimir(n,argc);
    return 0;
} // esta funcion imprimira lo que se ha guardado en nuestra lista
void imprimir(int x[],int y){
    for(int i=1; i<y;i++){
        printf("%i\n",x[i]);
    }
}
//para hacer el intercambi0o de dos valores vamos a necesitar una tercera variable 
//essta funcion sirve para intercambiar dos elementos a y bque se pasan a ella
void intercambio(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
void ordenar(int x[], int y){ //esta funcion va a ordenar nuestros contenidos en el arreglo y se llamara a la funcion intercambio
    for(int i=y-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(x[j]>x[j+1]){
                intercambio(&x[j],&x[j+1]);
            }
        }
    }
} //este algoritmo se denota como el algoritmo de la burbuja que como ya vimos consiste en ciclar repetidamente a traves de la lista
//comparando elementos adyaentes de dos en dos, si un elemento es mayor que ele que esta en la siguiente posicion se intercambian