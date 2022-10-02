/* Esse programa calcula e informa por quanto você vende suas horas trabalhistas*/

#include <stdio.h>

int main(void) {
  float salario;
  float gporh;
  float hpord;
  float calcm, calcs, calch;
  
  printf("informe seu salário:\n");
  scanf("%f", &salario);

  printf("informe as horas trabalhadas por dia: \n");
  scanf("%f", &hpord);
  
  calcm = salario/4;
  calcs = calcm/5;
  calch = calcs/hpord;

  printf("voce ganha %.2f por hora.", calch);
  
  return 0;
}
