#include <stdio.h>
#include <conio.h>

int main(){

    int num1=4;
    float num2=5.6;
    char nome='E';
      int *prtn;
      float *prtnt;
      char *ptrn;

       
        prtn=&num1;
        prtnt= &num2;
        ptrn= &nome;

         printf("%d\n", *prtn);
         printf("%f\n", *prtnt);
         printf("%c\n", *ptrn);

         getch();
         return 0;
}