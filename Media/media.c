//Fa�a um programa em C que calcule a m�dia de um aluno a partir da entrada de
//2 notas. No final, apresente a m�dia calculada e a situa��o do aluno de acordo com
//o valor da m�dia:
//M�dia entre 0 e 3.9 -> �Aluno Reprovado�
//M�dia entre 4.0 e 6.9 -> �Aluno em Exame�
//M�dia acima de 7.0 -> �Aluno Aprovado�


#include "stdio.h"
int main()

{
    float m, av1, av2;
    printf("Informe a nota da av1: ");
    scanf("%f", &av1);
    printf("Informe a nota da av2: ");
    scanf("%f", &av2);
    m=(av1+av2)/2;
    printf("sua media e: %.2f", m);

    if(m<4)
    {
        printf(" Aluno Reprovado: ");
    }

    else
    {
        if(m<7)

        printf("exame");

        else{
            printf("Aprovado");
            }
    }
    return 0;
}
