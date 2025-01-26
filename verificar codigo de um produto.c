#include <stdio.h>

int main(){

    int codigo;

    printf("informe um codigo para verificar a situacao do produto:\n");
    scanf("%d", &codigo);


    switch (codigo) {
    case 1:
        printf("alimento nao perecifel");
        break;
        case 2:
        printf("alimento perecifevl");
        break;
        case 3:
        printf("vestuario");
        break;
        case 4:
        printf("limpeza");
        break;
        case 5:
        printf("ERRO\n");
        break;
    
    default:
        break;
    }
    return 0;
}