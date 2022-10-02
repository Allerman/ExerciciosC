/*Esse programa cria um cupom fiscal da venda de carnes promossionais; a finalização da compra com o cartão
do supermercado da um desconto no pagamento.
Feito por Thayssa A. em 2022*/
#include <stdio.h>
#include <stdlib.h>

void iniciacao(){
  puts("Seja bem vindo ao Hipermercado Tabajara\n está com uma promoção de carnes que é imperdível.\n");
  printf("Confira: \n\n\tAté 5 Kg\n\t1.File Duplo      R$ 4,90 por Kg\n\t2.Alcatra         R$ 5,90 por Kg\n\t3.Picanha         R$ 6,90 por Kg   \n\n\tAcima de 5 Kg \n\t1.File Duplo       R$ 5,80 por Kg \n\t2.Alcatra          R$ 6,80 por Kg \n\t3.Picanha          R$ 7,80 por Kg\n\n");

    printf ("\n\nDigite 1 - Para File duplo");
    printf ("\nDigite 2 - Para Alcatra");
    printf ("\nDigite 3 - Para Picanha");
    printf("\n\nQual o tipo de carne escolhida?");
}
void pagamento(){
  printf("\nQual será a forma de pagamento:\n\tDigite 1 - Cartao de debito;\n\tDigite 2 - Cartao de credito;\n\tDigite 3 - Cartao Tabajara;\n\tDigite 4 - Pix;\n\tDigite 5 - A vista.");
}

int main(void) {
  char opcao,tipocarne,formapag;
	float qtdcarne,valorcompra,desconto,precofinal;
  int promoL;

  iniciacao();
  scanf(" %c", &opcao);
      if (opcao=='1'){
            promoL++;
            printf("Qual a quantidade desejada em Kg? ");
            scanf("%f",&qtdcarne);
            
            if(qtdcarne>=5){
              valorcompra =  qtdcarne * 5.80;
            }
            else{
              valorcompra = qtdcarne * 4.90;
            }
      }
            
      else if (opcao=='2'){
            printf("Qual a quantidade desejada em Kg? ");
            scanf("%f",&qtdcarne);
        
            if(qtdcarne>=5){
              valorcompra =  qtdcarne * 6.80;
            }
            else{
              valorcompra = qtdcarne * 5.90;
            }
      }
            
      else if (opcao=='3'){
            printf("Qual a quantidade desejada em Kg? ");
            scanf("%f",&qtdcarne);
        
            if(qtdcarne>=5){
              valorcompra =  qtdcarne * 7.80;
            }
            else{
              valorcompra = qtdcarne * 6.90;
            }
      }
            
      else {printf("Opcao invalida! Escolha entre 1,2 ou 3.");
        return 0;}
  
  pagamento();
  scanf(" %c",&formapag);

      if (formapag=='3'){
        desconto = valorcompra * 0.05;
        precofinal = valorcompra - desconto;
        
     printf("........................................");
     printf("\n\t         CUPOM FISCAL\n\t    HIPERMERCADO TABAJARA\n");
     printf("........................................");
		 printf("\n\tTIPO DE CARNE: %c",opcao);
		 printf("\n\tA QUANTIDADE COMPRADA EH: %.2f KG",qtdcarne);
		 printf("\n\tVALOR TOTAL EH DE R$: %.2f",valorcompra);
		 printf("\n\tA FORMA DE PAGAMENTO EH: %c",formapag);
		 printf("\n\tO VALOR DO DESCONTO EH DE R$: %.2f",desconto);		 
		 printf("\n\tO VALOR A PAGAR EH DE R$: %.2f",precofinal);
        }
      
  else if(formapag == '1' || formapag == '2' || formapag == '4' || formapag == '5'){
     printf("........................................");
     printf("\n\t         CUPOM FISCAL\n\t    HIPERMERCADO TABAJARA\n");
     printf("........................................");
		 printf("\n\tTIPO DE CARNE: %c",opcao);
		 printf("\n\tA QUANTIDADE COMPRADA EH: %.2f KG",qtdcarne);
		 printf("\n\tVALOR TOTAL EH DE R$: %.2f",valorcompra);
		 printf("\n\tA FORMA DE PAGAMENTO EH: %c",formapag);
		 printf("\n\tO VALOR DO DESCONTO EH DE R$: %.2f",desconto);		 
		 printf("\n\tO VALOR A PAGAR EH DE R$: %.2f",precofinal);
     printf("\n........................................\n");

    }

 else {
        printf("Forma de pagamento invalido!");
      }
  return 0;
}

