// MATRIZ INVERSA E A DIAGONAL PRINCIPAL E A MATRIZ TRANS..
#include <stdio.h>
int main()
{

  int ma[2][2];
  int trans[2][2];
  int c = 2;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Informe os elementos:\n");
      scanf("%d", &ma[i][j]);
    } // ARMAZENEI OS VALORES...
  }
  printf("MATRIZ NORMAL:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%4d", ma[i][j]);
    }
    printf("\n");
  }
  printf("MATRIZ INVERSA:\n");
  for (int i = c - 1; i >= 0; i--)
  {
    for (int j = c - 1; j >= 0; j--)
    {
      printf("%4d", ma[i][j]);
    }
    printf("\n");
  }
  printf("DIAGONAL PRINCIPAL:\n");
  for (int i = 0; i < 2; i++)
  {
    printf("%d\n", ma[i][i]);
  }
  printf("\n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      trans[j][i] = ma[i][j];
    }
  }
  printf("MATRIZ TRANS:\n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%4d", trans[i][j]);
    }
    printf("\n");
  }
}
