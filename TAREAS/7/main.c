#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argu[]){
          //declaramos las variables
          int a;
          int b;
          int c=1;
          a=atof(argu[1]);
          b=atof(argu[2]);
          //decimos en donde lo vamos a guardar 
          for(int i=0; i<b; i++){
          //decimos en donde lo vamos a guardar y que se va a ir multiplicando
          c=c*a;
          }
          //imprimimos el resultado
          printf("%.2d\n", c);
          return 0;
}