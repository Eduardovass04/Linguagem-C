#include <stdio.h>
 int main(){
     
     float num1;
     float num2;
     float resultado;
     char operador;

     printf("informe o primeiro numero:\n");
     scanf("%f", &num1);

     printf("Escolha um operador:(, +, -, *, /),\n\n");
     scanf(" %c", &operador);

     printf("informe o segundo numero:\n");
     scanf("%f", &num2);

    
                if (operador == '+') {
        resultado = num1 + num2;
    } else if (operador == '-') {
        resultado = num1 - num2;
    } else if (operador == '*') {
        resultado = num1 * num2;
    } else if (operador == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
            return 1; 
        }
    } else {
        
        printf("Erro: Operador inválido.\n");
        return 1;


        printf("RESULTADO: %.2f %c %.2f = %.2f\n", num1, operador, num2, resultado);


     
     
      return 0;
        }
 }