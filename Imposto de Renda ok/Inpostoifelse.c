#include "stdio.h"

int main()

{

  float s, sf, ir;
  printf("Informe o salario: ");
  scanf("%f", &s);

  if(s<=2259.20)
  {
   printf("O salario final e: %.2f", s);
  }

  else if(s>=2259.21 && s<=2826.65)
  {
    ir = s * 0.075;
    sf = (s - ir)+169.44;
  }
  else if(s>=2826.66 && s<=3751.05)
  {
    ir = s * 0.15;
    sf = (s - ir)+381.44;
  }
  else if(s>=3751.06 && s<=4664.68)
  {
    ir = s * 0.225;
    sf = (s - ir)+662.77;
  }
  else
    {
    ir = s * 0.275;
    sf = (s - ir)+896.00;
    }


  printf("O salario final e: %.2f", sf);

  return 0;
}

