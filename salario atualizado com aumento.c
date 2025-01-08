#include <stdio.h>
int main(){

    float salarioatual;
    float salarioatualizado;

    printf("informe o seu salario atual:\n\n");
    scanf("%f", &salarioatual);


    salarioatualizado=salarioatual* 1.1;
      

      printf("seu salario   atual e :%2.f", salarioatualizado);
  return 0;
}