#include "stdio.h"
int main()

{
    float vc, d, vf;
    printf("Valor da compra: ");
    scanf("%f", &vc);
    d=vc*0.05;
    vf=vc-d;
    printf("O desconto e: %.2f", &d);
    printf("O Valor final e: %.2f" , &vf);
    return 0;
}
