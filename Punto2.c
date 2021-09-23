#include <stdio.h>
#include <stdlib.h>


int cal_area(int num, int num2)
{
    return num*num2;
}
int cal_perim(int num, int num2)
{
    return num*2+num2*2;
}
int main()
{
    int a, b;
    printf("ingrese la altura y el ancho: ");
    scanf("%d\n %d", &a,&b);
    printf("El area es igual a: %d\nEl perimetro es igual a: %d\n", cal_area(a, b), cal_perim(a, b));
}
