#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c){
float d;
d = (b * b - 4 * a * c);
return d;
}

float raiz(float d){
float x;
x = sqrt(d); 	
return x;
}

int raizes(float a, float b, float c, float d, float e, float *x1, float *x2){
*x1 = ((- + e)/2 * a);
*x2 = ((- - e)/2 * a);
return ;

}

int main(){

float a, b, c, d, e, x1, x2;

printf("Entre com o valor de a: ");
scanf("%f",&a);
printf("Entre com o valor de b: ");
scanf("%f",&b);
printf("Entre com o valor de c: ");
scanf("%f",&c);

d = delta(a, b, c);
e = raiz(d);


if (d < 0){
printf("O valor de delta e: %.2f\n",d);
printf("Nao existe raiz de delta.\n");

}else{
    

if (d == 0){
printf("O valor de delta e: %.2f\n",d);
printf("A raiz de delta e: %.2f\n",r);

raizes(a, b, c, d, r, &x1, &x2);
printf("Tem uma raiz: x1=%.2f e x2=%.2f\n", x1, x2);

}else{
    

if (d >= 0){
printf("O valor de delta e: %.2f\n",d);
printf("A raiz de delta e: %.2f\n",r);
raizes(a, b, c, d, e, &x1, &x2);
printf("Tem duas raizes: x1= %.2f e x2= %.2f\n", x1, x2);

    }
  }
}
return 0;

}