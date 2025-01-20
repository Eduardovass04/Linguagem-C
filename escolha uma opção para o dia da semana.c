#include <stdio.h>
int main(){

  int dias;


  printf("informe um dia da semana:\n");
  scanf("%d", &dias);


  switch (dias)
  {
  case 1:
    printf("domingo");
    break;
  case 2:
  printf("segunda");
  break;
  case 3:
  printf("terça-feira");
  break;
  case 4:
  printf("quarta-feira");
  break;
  case 5:
  printf("quinta-feira");
  break;
  case 6:
  printf("sexta-feira");
  break;
  case 7:
  printf("sabado");
  break;
  case 0:
  printf("ERRO");
  break;

  default:
    break;
  }
}