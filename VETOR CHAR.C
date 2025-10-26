#include <stdio.h>

int main()
{
   char nomes[30];
   int p = 0, p1 = 0;

   printf("Informe os tres nomes:\n");

   for (int i = 0; i < 30; i++)
   {
      scanf("%c", &nomes[i]);
   }

   for (int i = 0; i < 30; i++)
   {

      if (nomes[i] == 'A')
      {
         p++;
      }

      if (nomes[i] == 'E')
      {
         p1++;
      }
      printf("%d:%c\n", i, nomes[i]);
   }

   printf("TOTAL DE LETRAS A:%d\n", p);
   printf("TOTAL DE LETRAS E:%d\n", p1);

   return 0;
}
