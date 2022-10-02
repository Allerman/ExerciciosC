/*Este programa pede numeros e calcula uma equeção do segundo grau. 
Informa se não for e se não possuir raizes reais.
Feito por Thayssa A. em 2022*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {

  float a, b, c, delta, x1, x2, b²;
  
  printf("f(x) = ax² + bx + c\n");
  printf("Informe os valores de A:");
  scanf("%f",&a);

if (a==0){
  printf("A equação não é do segundo grau\n");
  return 0;
}
else{
  printf("Informe os valores de B:");
  scanf("%f",&b);
  printf("Informe os valores de C:");
  scanf("%f",&c);
}

b²= b*b;
delta = b² -4 *a*c;

  if(delta<0){
    printf("\nDelta = %.0f\nNão possui raízes reais!\n", delta);}
    
  else if(delta == 0){
            x1 = -b / (2 * a);
            printf("\nDelta = %.0f \n x¹ = %.0f\n", delta, x1);}
        
        else{
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("\nDelta = %.0f \nx¹ = %.0f\nx² = %.0f\n", delta, x1, x2);}

  return 0;
    }
