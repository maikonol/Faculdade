#include "stdio.h"
int main()

{
    float d, r, c;
    printf("Valor da cotacao: ");
    scanf("%f", &c);
    printf("Quantia em dolar: ");
    scanf("%f", &d);
    r=d*c;
    printf("valor em real: %f", r);
    return 0;
}
