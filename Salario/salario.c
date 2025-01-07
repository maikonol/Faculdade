#include "stdio.h"// Programa para calular aumento de 10% do salário atual
int main()

{
    float s, a, sf;
    printf("Informe o valor do salario e: ", a);
    scanf("%f", &s);
    printf("Valor do aumento: ");
    scanf("%f", &a);
    a=s*0.10;
    sf=s+a;
    printf("o valor do aumento: %.2f", a);
    printf("o salario final e: %.2f", sf);
    return 0;

}
