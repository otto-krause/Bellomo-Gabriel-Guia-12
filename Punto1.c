#include <stdlib.h>
#include <stdio.h>


int most()
{
  int num;
  printf("ingrese un numero cualquiera: ");
  scanf("%d", &num);
  return num;
}
int main()
{
    int num, num2;
    num=most();
    num2=most();
    printf("\n%d \n%d", num, num2);
}
