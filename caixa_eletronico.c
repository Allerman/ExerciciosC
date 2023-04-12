/*O programa é um caixa eletrônico. Ele pergunta ao usuário o 
valor do saque e depois informa quantas notas de cada valor serão fornecidas.
Com valor minimo de R$10 e maximo de R$600

Feito por Thayssa A. em 2022*/ 
#include <stdio.h>

void iniciar(){
  printf("\n\tBem vindo ao BankFlex\n");
printf("_______________________________________________\n");
  printf("notas disponíveis R$1, R$5, R$10, R$50 e R$100\n");
  printf("minimo para sacar: R$10 | maximo: R$600\n");
  printf("\tDigite 1 para Sacar\n\tDigite 2 para Sair\n");
}

int main(void){
  int valor,n100, n50, n20, n10, n5, n1, opcao, i;

  
  iniciar();
  scanf("%d",&opcao);

  while(opcao==1){
  printf("\nQual o valor que deseja sacar: ");
  scanf("%d",&valor);
  
  if(valor<=10){
    printf("Minimo nao atingido! Tente outro valor\n");}
  else if(valor>600){
    printf("Maximo atingido! Tente outro valor\n");}
  else if (valor<=600){
    printf("Suas notas em R$:\n");
    
      n100= valor / 100;
      n50= valor % 100 / 50;
      n20= valor % 100 % 50 / 20;
      n10= valor % 100 % 50 % 20 / 10;
      n5= valor % 100 % 50 % 20 % 10/ 5;
      n1= valor % 100 % 50 % 20 % 10 % 5/ 1;
    
      if(n100>=1)
        printf("%i notas de 100\n",n100);
    
      if(n50>=1)
        printf("%i notas de 50\n",n50 );

      if(n20>=1)
        printf("%i notas de 20\n",n20);
        
      if(n10>=1)
        printf("%i notas de 10\n",n10);

      if(n5>=1)
        printf("%i notas de 5\n",n5);
       
      if(n1>=1)
        printf("%i notas de 1\n",n1);
    }
      iniciar();
      scanf("%d",&opcao);
    
      if (opcao==2) {break;}
      }
  i++;
  }
