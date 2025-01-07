// Este programa tem a função de calcular o valor de desconto de imposto de renda,
//segundo a tabela de descontos apresentada. A entrada é o salário do funcionário.
//Para calcular o desconto, deverá ser aplicada a lógica condicional de
//encadeamento para encontrar a porcentagem de descontos. A fórmula para
//cálculo do desconto é:
//IR = salário inicial * % imposto
//Salário Final = (salário inicial - IR) + dedução
//Os cálculos poderão ser feitos de forma separada ou em uma única expressão.




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
