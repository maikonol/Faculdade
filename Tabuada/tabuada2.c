#include "stdio.h"

int main()
 {
    int i,n,r;
    printf("Digite um número: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i=i+1)
    {
      r=n*i;
      printf("%d x %d = %d\n", n, i,r);
    }

    return 0;
}

