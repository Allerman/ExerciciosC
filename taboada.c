#include <stdio.h>

int main(void) {
  int n;
  int r;
  int i=0;

  printf("informe a ser multiplicado: ");
  scanf("%i",&n);

  for(i=0; i<11; i++){
    r= n*i;
    printf("%i x %i = %i\n",n,i,r);
    
  }
  return 0;
}