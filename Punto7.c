#include <stdio.h>
#include <stdlib.h>


char*resl(int num, int num2)
{
    if(num>num2)
    {
        return "mayor";
    }
    if(num<num2)
    {
        return "menor";
    }
    else
    {
        return "igual";
    }
}

int main()
{
    int num, num2;
    printf("Ingrese el primero numero y despues el segundo: \n");
    scanf("%d \n%d", &num, &num2);
    printf("%d es %s que %d", num, resl(num,num2), num2);
}
