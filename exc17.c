#include <stdio.h>

void fracc(float num, int *x, float *y) {
    *x = (int)num;
    *y = num - *x;
    num = 10000;
}

int main(){
    float num, frac = 10;
    int inteira = 10 ; 

    printf("Digite um numero:");
    scanf("%f", &num);
    
    printf("Antes %.2f: %i e %.2f\n", num, inteira, frac);
    
    fracc(num, &inteira, &frac);
    printf("Depois %.2f: %i e %.2f\n", num, inteira, frac);

    return 0;
}