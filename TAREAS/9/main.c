#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argu[]) {
int t, sum; //declaramos las variables 
t=atoi(argu[1]); //hacemos que t tome el valor del primer argumento
sum=0;   //iniciamos sum a cero para no tener problemas al efecuar operaciones
while(t!=0){  //iniciamos un ciclo para realizar los calculos
sum=sum+(t%10); //sum sera igual a ella misma mas el modulo de t entre diez
t=(t/10); //dividimos a t entre diez para quitarle sul ultimo digito
}
printf("%i\n", sum); //mostramos el resultado de la suma
return 0;
}