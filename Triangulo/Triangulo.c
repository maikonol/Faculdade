#include "stdio.h"
int main()

{
    float a, b, h;
    printf("Informe o valor da base: ");
    scanf("%f", &b);
    printf("Informe da altura: ");
    scanf("%f", &h);
    a=(b*h)/2;
    printf("a area do triangulo e: %.2f", a);
    return 0;
}
