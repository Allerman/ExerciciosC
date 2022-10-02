/*Esse programa calcula e informa o total de ganhos no mês
Feito por Thayssa A. em 2022*/

#include <stdio.h>

int main(void) {
  float ganhoH; // ganho por hora
  float ganhoD; // ganho por dia
  float ganhoS; // ganho por semana
  float ganhoM; // ganho mes
  float h_trab;

  printf("informe o valor de ganho por hora: \n");
  scanf("%f", &ganhoH);

  printf("informe suas horas trabalhadas por dia: \n");
  scanf("%f", &h_trab);

  ganhoD = ganhoH * h_trab;
  ganhoS = ganhoD * 5;
  ganhoM = ganhoS * 4;

  printf("seu ganho total no mes e de: %.2f ", ganhoM);

  return 0;
}