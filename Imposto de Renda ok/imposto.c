// Este programa tem a fun��o de calcular o valor de desconto de imposto de renda,
//segundo a tabela de descontos apresentada. A entrada � o sal�rio do funcion�rio.
//Para calcular o desconto, dever� ser aplicada a l�gica condicional de
//encadeamento para encontrar a porcentagem de descontos. A f�rmula para
//c�lculo do desconto �:
//IR = sal�rio inicial * % imposto
//Sal�rio Final = (sal�rio inicial - IR) + dedu��o
//Os c�lculos poder�o ser feitos de forma separada ou em uma �nica express�o.




#include "stdio.h"

int main()
{
  float s, sf, ir;
  printf("Informe o salario: ");
  scanf("%f", &s);

  if(s<=2259.20)
  {
    sf = s;

  }
  else
  {
    if(s<=2826.65)
    {
      ir = s * 0.075;
      sf = (s - ir)+169.44;
    }
    else
    {
      if(s<=3751.05)
      {
        ir = s * 0.15;
        sf = (s - ir)+381.44;
      }
      else
      {
        if(s<=4664.68)
        {
          ir = s * 0.225;
          sf = (s - ir)+662.77;
        }
        else
        {
          ir = s * 0.275;
          sf = (s - ir)+896.00;
        }
      }
    }
  }
  printf("O salario final e: %.2f", sf);

  return 0;
}
