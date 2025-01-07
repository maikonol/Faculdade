// Escreva um programa em C que a partir do cálculo da idade de uma pessoa (ano
// atual – ano de nascimento), apresente no final a idade calculada e a condição de maioridade
// Para idade acima de 18 anos, mostrar “MAIOR DE IDADE”
// Para idade abaixo de 18 anos, mostrar “MENOR DE IDADE”


#include "stdio.h"
int main()
{
    int aa, an, id;
    printf("Informe o ano atual: ");
    scanf("%d", &aa);
    printf("Informe o ano de nascimento: ");
    scanf("%d", &an);
    id=aa-an;
    printf("sua idade e: %.2d", id);
    if(id>=18)
    {
        printf("Maior de idade");
    }
    else{

            printf("Menor de idade");
        }

    return 0;

}
