#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double RAIZ(double x, double tol, double candidato){ //utilizamos una funcion llamada raiz junto con tres parametros de entrada
  double division, diferencia, promedio;
  division=x/candidato; //las operaciones a realizar son la division la cuel es el numero alque se le va a sacar la raiz
  diferencia=fabs(division-candidato); //la diferencia que es igual al valor absoluto de la division menos el primer numero divisor
  while(diferencia>tol){ //dentro de la funcion entra un while para las condiciones
  	division=x/candidato; //division es igual al numero a sacar raiz entre el primer numero divisor
  	diferencia=fabs(division-candidato); //la diferencia va a ser igual al valor absoluto de la div menos el primer numero divisor
  	promedio=(candidato+division)/2; //el promedio es igual al primer num divisor mas el resultado de la div entre dos
  	candidato=promedio; 
   }
return candidato;
}  
int main(int argc,char*argv[]){ //dentro de nuestra funcion principal asignamos una variable el cual va a guardar el resultado obtenido de la funcion raiz
double numero, tolerancia, ans, candidato;
numero=atof(argv[1]);
candidato=atof(argv[3]);
tolerancia=atof(argv[2]);
ans=RAIZ(numero,tolerancia,candidato);
printf("%lf\n",ans);
return 0;
}