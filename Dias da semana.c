#include <stdio.h>
int main(){

  float distancia;
  float ptotal;
  int dias;


    printf("informe a distancia percorrida em (km):");
    scanf("%f", &distancia);

    printf("informe a quantidade de dias usados:");
    scanf("%d", &dias);

    dias=90;
    distancia=0.20;
    ptotal= distancia * dias;

    printf("o preco total a ser pago e de: %2.f", ptotal);

    return 0;
} 