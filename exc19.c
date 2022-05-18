#include<stdio.h>

int vmaximo, repetindo; 

    vmaximo = 0;
    repetindo = 0;

void verificando(int *elementos, int num_elementos) {  

    int a;
    vmaximo = elementos[0];

        for(a=0; a<num_elementos; a++) {  

            if(vmaximo<=elementos[a]) {
            vmaximo = elementos[a];
}
}

        for(a=0; a<num_elementos; a++) {  

            if(vmaximo==elementos[a]) {
            repetindo++;
}
}
}

void main (){

    int n;
    int i = 0;

    printf("Digite a quantidade de  numeros para a lista:\n");
    scanf ("%d", &n);

    int lista[N];

    for (i = 0; i < N; i++){

       printf("\nDigite o numero %d:\n", i+1);
       scanf("%d", &lista[i]);

}

    verificando(lista, n); 

    printf("\nO maior numero digitado foi: %d\n", vmaximo);
    printf("Este numero se repetiu %d vezes\n", repetindo);