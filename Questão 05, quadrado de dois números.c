#include <stdio.h>
  int main(){
     int num1;
     int num2;
     int soma;
     int quadrado;

     printf("informe o primeiro numero:\n");
     scanf("%d", &num1);

     printf("informe o segundo numero:\n");
     scanf("%d", &num2);


        soma= num1+num2;
        quadrado= num1*num1;

        printf("informe a soma de %d e %d: %d", num1, num2, soma);
        printf("o qudrado de %d e %d: %d\n", num1, quadrado);

        return 0;
  }