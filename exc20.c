#include<stdio.h>

int vmaximo, repetindo; 

    vmaximo = 0;
    repetindo = 0;

void verificando(int *elementos, int num_elementos) {  

    int i;
    vmaximo = elementos[0];

        for(i=0; i<num_elementos; i++) {  

            if(vmaximo<=elementos[i]) {
            vmaximo = elementos[i];
}
}

        for(i=0; i<num_elementos; i++) {  

            if(vmaximo==elementos[i]) {
            repetindo++;
}
}
}

void main (){

    int n;
    int i = 0;

    printf("Digite a quantidade de numeros:\n");
    scanf ("%d", &n);

    int lista[n];

    for (i = 0; i < n; i++){

       printf("\nDigite o numero %d:\n", i+1);
       scanf("%d", &lista[i]);

}

    verificando(lista, n); 

    printf("\nO maior numero digitado foi: %d\n", vmaximo);
    printf("Este numero se repetiu %d vezes\n", repetindo);