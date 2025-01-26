#include <stdio.h>
int main(){

int codigo;
     

     printf("informe o codigo do produto:\n");
     scanf("%d", &codigo);




     switch (codigo){
     case 100:
        printf("R$ 1,70 (CACHORRO QUENTE)");
        break;
        case 101:
        printf(" R$ 2,30 (BAURU SIMPLES)");
        break;
        case 102:
        printf(" R$ 2,60 (HAMBURGUER)");
        break;
        case 103:
        printf("R$ 2,40 (CHEESEBURGUER)");
        break;
        case 104:
        printf("R$  2,50  (REFRIGERANTE)");
        break;
        case 105:
        printf("R$  1,00  (CAFÉ)");
        break;
     
     default:
        break;
     }


    return 0;
}