#include <stdio.h>
int main(void){
    int mat[3][3];

    printf("informe os elementos da matriz:\n");
    for (int i = 0; i <3; i++){
    for (int j = 0; j < 3; j++){
        scanf("%d", &mat[i][j]);
    }
    
    }
    for (int i = 0; i < 3; i++){
        printf("%d",mat[i][i]);
    }
    printf("\n");
    return 0;
}