#include <stdio.h>

int main () {

   int a, b;  

   printf("Entre com um valor para a: ");
   scanf("%d", &a);

   printf("Entre com um valor para b: ");
   scanf("%d", &b);

   printf("\n");

   if (&a > &b) {
       printf("%d É o maior endereço da memoria", a);
   } else {
       printf("%d É o maior endereço da memoria", b);

   }

}