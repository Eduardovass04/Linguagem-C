#include <stdio.h>
int main(void){
   int mat[3][3];
   int transposta[3][3];

   printf("informe os elementos da matriz:\n");
   for (int i = 0; i < 3; i++){
   for (int j = 0; j < 3; j++){
   scanf("%d",&mat[i][j]);
   transposta[j][i] = mat[i][j];
 }
 
   }
   for (int i = 0; i < 3; i++){
  for (int j = 0; j <3; j++){
   printf("%d", transposta[i][j]);
  }
  printf("\n");
   }
   return 0;
}