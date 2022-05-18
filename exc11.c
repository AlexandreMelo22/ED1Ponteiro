#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[5], i;
    int *endereco_vetor;

    endereco_vetor = vet;

    printf("Entre com os elementos\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Elementos adicionados:\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d  ", vet[i]);
    }

    printf("\n\nEndereços do array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%i: %i : %i\n", i + 1, vet[i], endereco_vetor++);
    }

    printf("\nEndereço dos arrays pares:\n");
    endereco_vetor = vet;
    for (i = 0; i < 5; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("\n%d  -->  Posicao = %d", vet[i], endereco_vetor);
        }
        endereco_vetor++;
    }
}