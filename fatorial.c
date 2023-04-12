#include <stdio.h>

int main(void) {
 int fat, n;
   
  printf("informe um numero:\n");
  scanf("%i", &n);

  for(fat = 1; n > 1; n = n - 1){
  fat = fat * n;
  printf("%d\n", fat);}
  
  return 0;
}