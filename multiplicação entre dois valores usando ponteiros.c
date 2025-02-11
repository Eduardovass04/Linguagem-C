#include <stdio.h>
#include <conio.h>
int main(){

     int multiplicar=0;
     int num1=56;
     int num2=45;
     int *resultado;

      
       multiplicar= num1 * num2;
       resultado= &multiplicar;


       printf("%d\n", *resultado);

        getch();
        return 0;
}