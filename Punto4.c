#include <stdio.h>
#include <stdlib.h>


float pres(float num, float num2)
{
    return num/num2;
}
int main()
{
    float fuerza, area;
    printf("Ingrese la fuerza (N) y luego el area de la superficie (m2): ");
    scanf("%f %f", &fuerza, &area);
    printf("La presion es igual a: %f(Pascal)\n", pres(fuerza,area));
}
