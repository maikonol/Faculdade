#include "stdio.h"

int main()

{
    int op;
    float vo, i;
    printf("Escolha uma opcao:\n");
    printf("1 - Importacao\n");
    printf("2- Exportacao\n\n");
    scanf("%d", &op);
    printf("Valor da operacao: \n");
    scanf("%f",&vo);
    if(op==1)
    {
        if(vo<=9000.00)
        {
           i=vo*0.09;
        }
        else
        {
            if(vo<=13600.00)
            {
                i=vo*0.14;
            }
            else
            {
                i=vo*0.14;
            }
        }
    }
     if(op==2)
    {
        if(vo<=8000.00)
        {
           i=vo*0.04;
        }
        else
        {
            if(vo<=12000.00)
            {
                i=vo*0.06;
            }
            else
            {
                i=vo*0.08;
            }
        }
    }


    printf("O valor do importo e: %.2f",i);
    return 0;
}
