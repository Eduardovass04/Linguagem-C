#include <stdio.h>

int main(){
  int mat[5][5];
  int n;



  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("Informe os elementos da matriz:\n");
      scanf("%d", &mat[i][j]);
    }
  }
  printf("\n");
  printf("INFORME UM NUMERO:\n");
  scanf("%d", &n);
printf("----------------------------------------------------\n");
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("[%d]:[%d]=%d\n",i,j,mat[i][j]);
    }
    printf("\n");
  }

  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(n==mat[i][j]){
        printf("ENCONTRADO:%d\n", n);
        printf("POSICAO:%d, %d\n", i,j);
        return 1;
      }
    }
  }
  return 0;
}
