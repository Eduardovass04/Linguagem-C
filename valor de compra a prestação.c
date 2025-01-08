#include <stdio.h>

int main(){
    float valorcompra;
    float prestacao;

    printf("informe o valor da sua compra:\n\n");
    scanf("%f", &valorcompra);

    prestacao= valorcompra/4;

    printf("---- A SUA PRESTACAO E DE  :%.2f", prestacao);

     return 0;
}