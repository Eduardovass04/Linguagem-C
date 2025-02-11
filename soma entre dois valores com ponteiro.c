#include <stdio.h>
#include <conio.h>
int main(){

   int num1=20;
   int num2=30;
   int soma=0;
    
    int *resultado;

    soma=num1+num2;

    resultado=&soma;

     
     printf("%d\n", *resultado);

     getch();
     return 0;
}