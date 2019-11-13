#include <stdio.h>
#include <stdlib.h>
int ABRAZOS(int personas){ //se utiliza una funcion llamada abrazos entran como parametro el numero de personas al que se van a saludar
 int res; //la funcion que se utliza es recursiva
 int z;
 if(personas==1){ //si el numero de personas es igual a uno entonces regresa a cero
  return 0;
 }else{
  z=ABRAZOS(personas-1)+(personas-1); //en caso contrario se vuelve a llamar a la funcion abrazos donde el parametro sera el numero de personas menos uno mas el numero de personas menos uno
  return z; //z sera el valor a regresar
  }
}
int main(int argc,char*argv[]){ //dentro de la funcion main llamamos a la funcion abrazos el cual el valor regresado sera guardado en una varibale
int a, ans;
a=atoi(argv[1]);
ans=ABRAZOS(a);
printf("%i\n",ans); //se imprime el resultado
return 0;
}