#include <stdio.h>
#include <stdlib.h>


int *res()
{
  static int resistencia[6];
  resistencia[5] = 0;
  for(int I=0;I<5;I++)
  {
    printf("ingrese la resistencia %d: ", I+1);
    scanf("%d", &resistencia[I]);
    resistencia[5]+=resistencia[I];
  }
  return resistencia;
}
int main()
{
  int *resistencia=res();
  for(int I=0;I<5;I++)
  {
    printf("Resistencia nro%d: %d\n", I+1, resistencia[I]);
  }
  printf("Resistencia total: %d\n", resistencia[5]);
}
