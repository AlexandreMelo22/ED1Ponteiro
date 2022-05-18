#include <stdio.h>

int main(){
    int a = 10;
    float l = 22.10;
    char e ='X';
    
    int *ponteiroint = &a;
    float *ponteirofloat = &l;
    char  *ponteirochar = &e;
    
    printf("Valores Originais:\n");
    printf("%i ", *ponteiroint);
    printf("\n%f",  *ponteirofloat);
    printf("\n%c", *ponteirochar);
    
    printf("\n\n");
    
   *ponteiroint = 10;
   *ponteirofloat = 22.11;
   *ponteirochar = 'X';

    printf("Valores apos as modificaçoes:\n");
    printf("%i ", *ponteiroint);
    printf("\n%f",  *ponteirofloat);
    printf("\n%c", *ponteirochar);

}