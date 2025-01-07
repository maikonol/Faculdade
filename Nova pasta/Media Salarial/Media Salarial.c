// Cálculo da media salarial

#include "stdio.h"

int main()
{
    float s[15], ms,acs;
    int i, sa, sb, mas, mes;
    acs=0;
    sa=0;
    sb=0;

    for(i=0; i<=14;i++)
    {
        printf("Salario: ");
        scanf("%f", &s[i]);
        acs=acs+s[i];
        if(i==0)
        {
            mas=s[i];
            mes=s[i];
        }
        if(s[i]>mas)
        {
            mas=s[i];
        }
        if(s[i]<mes)
        {
            mes=s[i];
        }
    }
    ms=acs/15;
    for(i=0; i<=14;i++)
    {
        if(s[i]>=ms)
        {
            sa++;
        }
        else
        {
            sb++;
        }
        if(s[i]>=ms)
        {
            printf("Salario acima da media: %.2f\n", s[i]);
        }
    }
    printf("Media salarial: %.2f\n", ms);
    printf("Maior Salario: %.2f\n", mas);
    printf("Menor Salario: %.2f\n", mes);
    printf("Salarios Acima: %d\n", sa);
    printf("Salarios Abaixo: %d\n", sb);
    return 0;

}
