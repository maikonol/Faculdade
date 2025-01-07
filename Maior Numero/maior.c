 //A partir da entrada de 3 numeros inteiros, faca um programa que verifique qual é o maior numero digitado e
// mostre no final qual o maior. Desconsiderar numeros iguais.

#include <stdio.h>
int main()
{
int a, b, c, maior;
printf("Digite o 1o numero: ");
scanf("%d", &a);
printf("Digite o 2o numero: ");
scanf("%d", &b);
printf("Digite o 3o numero: ");
scanf("%d", &c);
maior = a;
if(b>maior)
{
maior = b;
}
if(c>maior)
{
maior = c;
}
printf("Maior numero: %d", maior);

return 0;
}
