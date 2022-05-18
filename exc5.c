#include<stdio.h>

int comparando(int *nro01, int *nro02){

int aux;

   if(*nro02 > *nro01) {
       aux = *nro02;
       *nro02 = *nro01;
       *nro01 = aux;
   }
}
int main(){

   int nro01, nro02;
  
   printf("Entre com o valor 1: ");
   scanf("%d", &nro01);

   printf("Entre com o valor 2: ");
   scanf("%d", &nro02);

   comparando(&nro01,&nro02); 
 
   printf("\nMaior valor: %d",nro01);
   printf("\nMenor valor: %d",nro02);
 
   return 0;
}