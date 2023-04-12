/*Este programa calcula media de quatro notas e informa de houve ou não
aporvação
Feito por Thayssa A. em 2022*/
#include <stdio.h>

int main(void) {
  float n1,n2,n3,n4,soma,media;
  
  printf("digite sua primeira nota\n");
  scanf("%f", &n1);
  
  printf("digite sua segunda nota\n");
  scanf("%f", &n2);
  
  printf("digite sua terceira nota\n");
  scanf("%f", &n3);
  
  printf("digite sua quarta nota\n");
  scanf("%f", &n4);

  soma = n1+n2+n3+n4;
  media = soma/4;

  printf("sua media é: %.2f\n", media);

  if(media<=5){
    printf("Você foi reprovado!");
  }
  else if (media>=6){
    printf("Você está aprovado!");
  }
  
}