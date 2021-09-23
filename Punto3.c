#include <stdio.h>
#include <stdlib.h>


int percent(float num, float num2)
{
    return (num/num2)*100;
}
int percent2(float num2, float num3)
{
return (num3/num2)*100;
}

int main()
{
    float num, num2, num3;
    printf("Ingrese cantidad de hombres y despues la de mujeres: ");
    scanf("%f %f",&num, &num3);
    num2=num+num3;
    printf("El porcentaje de hombres es: %%%d\n", percent(num , num2));
    printf("El porcentaje de mujeres es: %%%d\n", percent2(num2 , num3));
}
