#include<stdio.h>
 
int main() {
 int n, i, r = 0;
 
 printf("Digite um número: ");
 scanf("%d", &n);

 for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
       r++;
       break;
    }
 }
 
 if (r == 0)
    printf("%d é um número primo\n", n);
 else
    printf("%d não é um número primo\n", n);
 
 return 0;
}