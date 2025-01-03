#include <stdio.h>
int main(){
    char tabuada;
    float num1;
    float num2;
    float resultado;

    printf("informe a tabuda (+, *, -, /):");
    scanf(" %c", &tabuada);

    printf("informe o primeiro numero:");
    scanf("%f", &num1);

    printf("informe o segundo numero:");
    scanf("%f", &num2);


    switch (tabuada) {
    case '+':
    resultado = num1 + num2;  
            break;

            case '-':
          resultado = num1 - num2;
          break;

          case '/':
          resultado = num1 / num2;
          if (num2==0) {
            printf("divisao por zero\n");
          } else  {
              resultado= num1/ num2;
          }
            break;
            printf("operacao invalida!\n");
            default:
             return 1;
    }
          
            if (tabuada == '+' || tabuada == '-' || tabuada == '*' || tabuada == '/') {
        printf("Resultado: %.2f\n", resultado);
    }
       return 0;
}