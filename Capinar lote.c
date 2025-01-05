#include <stdio.h>
 int main(){
    int dia;

    printf("escoha um dia da semana:\n");
    scanf("%d", &dia);

    if (dia==1) {
      printf("Hoje E DOMINGO ! ");
    } else if (dia==2) {
      printf("HOJE E SEGUNDA-FEIRA!");
    } else if (dia==3) {
      printf("HOJE E TERCA-FEIRA");
    } else if (dia==4) {
       printf("HOJE E QUARTA-FEIRA");
    } else if (dia==5) {
       printf("HOJE E QUINTA-FEIRA");
    } else if (dia==6) {
       printf("HOJE E SEXTA-FEIRA");
    } else if (dia==7) {
        printf("HOJE E SABADO !");
    }
       printf("\n\n,===== E VOCE FOI ESCOLHIDO PELO PRESIDENTE  PARA CAPINAR UM LOTE !,=======\n\n", dia);
        

        return 0;
    
    
    
    
    
    
 }