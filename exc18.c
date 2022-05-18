#include<stdio.h>

void calc_esfera(float r, float *area, float *volume) {
    (*area) = 4 * 3.1415 * r * r;
    (*volume) = (4/3) * 3.1415 * r * r * r;
}

int main(void){
    
    float raio, area, volume;
    
    printf("Entre com o raio: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);
    printf("\nA area  da superficie e: %.2f", area);
    printf("\nO volume de uma esfera e: %.2f\n", volume);

    return 0;
}