//Escreva um programa em C que receba a entrada de dois n�meros inteiros.
//Apresente no final o resultado da compara��o entre os n�meros, da seguinte forma:
//Considerando as vari�veis: a e b
//Se a for igual a b, mostrar mensagem �N�meros iguais�
//Se a for maior que b, mostrar �A � o maior n�mero�
//Se b for maior que a, mostrar �B � o maior n�mero�

#include "stdio.h"
int main()
{
    int a, b;
    printf("Digite o 1o numero: ");
    scanf("%d", &a);
    printf("Digite o 2o numero: ");
    scanf("%d", &b);
    if(a==b)
    {
        printf("Numeros iguais!");
    }
        else
    {
    if(a>=b)
    {
        printf("%d e o maior.", a);
    }
    else

        {
            printf("%d e o maior.", b);
        }
    }
    return 0;
}
