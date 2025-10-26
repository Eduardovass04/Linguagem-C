#include <stdio.h>

int main(){

   int vetor[8];
   int soma=0, nmt=0, maiorq=0, menorq=0, maior;
   float media;
   for(int i =0; i<8;i++){

      printf("Informe os elementos do vetor:\n");
      scanf("%d", &vetor[i]);
   }

   maior=vetor[0];

   for(int i=0;i<8;i++){
      soma=soma+vetor[i];

      if(vetor[i] % 5==0){
         nmt++;
      }
      if(vetor[i] > 10){
         maiorq++;
      }
      if(vetor[i]> 10 && vetor[i]<30){
         menorq++;
      }
      if(maior<vetor[i]){
         maior=vetor[i];
      }
      printf("%d:%d", i, vetor[i]);
   }
   printf("\n");
   media=soma/8;

   printf("Media:%.2f\n", media);
   printf("Total de multiplos de 5:%d\n", nmt);
   printf("Total de maiores que 10:%d\n", maiorq);
   printf("Total de menores que 30:%d\n", menorq);
   printf("Maior elemento do vetor:%d\n", maior );

   return 0;
}
