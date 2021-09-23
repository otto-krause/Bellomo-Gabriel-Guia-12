#include <stdio.h>
#include <stdlib.h>


float division(int num)
{
    return (float)num/8;
}

int main()
{
    int num;
    printf("ingrese un numero entero: ");
    scanf("%d", &num);
    printf("la octava parte es %f", division(num));
}
