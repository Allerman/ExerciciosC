
#include <stdio.h>

int main(void) {
  float precoP;
  float precoS;
  int i=0;
  
  printf("Panificadora Djoaquim.\n");
  printf("informe o preço do pao: \n");
  scanf("%f",&precoP);

  for(i=0;i<51;i++){
    precoS= precoP*i;
    printf("%i - R$ %.2f\n",i,precoS);}
  
  return 0;
}