#include <stdio.h>
int main(void){

    float matA[3][4];
    float matB[3][4];
    float matC[3][4];

    printf("informe os elementos da matriz A:\n");
    for ( int i = 0; i < 3; i++) {
    for ( int j = 0; j < 4; j++){
     scanf("%f", &matA[i][j]) ; 
      
    }
    }
    printf("informe os elementos da matriz B:\n");
    for ( int i = 0; i < 3; i++) {
    for ( int j = 0; j < 4; j++){
     scanf("%f", &matB[i][j]) ;
     matC[i][j]=matA[i][j] + matB[i][j];
    }
    }
    
    printf("a soma de matC:\n");
    for ( int i = 0; i < 3; i++) {
    for ( int j = 0; j < 4; j++){
      printf("%f",matC[i][j]);
    }
    }
    printf("\n");
}