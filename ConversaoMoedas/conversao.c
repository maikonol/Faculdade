//Este programa dever� apresentar ao usu�rio 4 op��es para convers�o de
//moedas. A partir da escolha do usu�rio, o programa dever� calcular e mostrar a
//convers�o realizada. As op��es s�o:
// 1 � Real para D�lar
// 2 � D�lar para Real
// 3 � Real para Euro
// 4 � Euro para Real

#include "stdio.h"

int main()
{
  float c, d, r, e;
  int op;
  printf("Conversao de moedas\n");
  printf("===================\n");
  printf("1-Real para Dolar\n");
  printf("2-Dolar para Real\n");
  printf("3-Real para Euro\n");
  printf("4-Euro para Real\n\n");
  printf("Escolha uma opcao: ");
  scanf("%d", &op);
  printf("Informe a cotacao: ");
  scanf("%f", &c);
  if(op==1)
  {
    printf("Valor em REAL: ");
    scanf("%f", &r);
    d = r/c;
    printf("Valor convertido em DOLAR: %.2f", d);
  }
  if(op==2)
  {
    printf("Valor em DOLAR: ");
    scanf("%f", &d);
    r = d*c;
    printf("Valor convertido em REAL: %.2f", r);
  }
  if(op==3)
  {
    printf("Valor em REAL: ");
    scanf("%f", &r);
    e = r/c;
    printf("Valor convertido em EURO: %.2f", e);
  }
  if(op==4)
  {
    printf("Valor em EURO: ");
    scanf("%f", &e);
    r = e*c;
    printf("Valor convertido em REAL: %.2f", r);
  }

  return 0;
}
