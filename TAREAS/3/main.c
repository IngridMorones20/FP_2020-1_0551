#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]) {
    double num1, num2, suma, resta, mult, divi;
    num1 = atof(argv[1]);
    num2 = atof(argv[2]);
    suma = num1+num2;
    resta = num1-num2;
    mult = num1*num2;
    divi = num1/num2;
    printf("%.2f\n", suma);
    printf("%.2f\n", resta);
    printf("%.2f\n", mult);
    printf("%.2f\n", divi);
    return 0;
}
