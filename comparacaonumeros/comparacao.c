//Escreva um programa em C que receba a entrada de dois números inteiros.
//Apresente no final o resultado da comparação entre os números, da seguinte forma:
//Considerando as variáveis: a e b
//Se a for igual a b, mostrar mensagem “Números iguais”
//Se a for maior que b, mostrar “A é o maior número”
//Se b for maior que a, mostrar “B é o maior número”

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
