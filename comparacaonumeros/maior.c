#include "stdio.h"
int main()

{

float a,b;
printf("Escreva o primeiro numero: ");
scanf("%f", a);
printf("Escreva o segundo numero: ");
scanf("%f", b);
if(a==b)
{
    printf("numeros iguais");

}
else
    if(a>b)
    {
        printf("a � o maior");

    }
    else
    {
        printf("b e o maior");

    }

}
