#include <stdio.h>

int main (){

    // Variaveis    
    int vet[9], i, menor, maior;

    // Entrada e processamento

    for (i = 0; i < 9; i++){
        printf("Usuario, informe o valor do vetor %i: ", i);
        scanf("%i", &vet[i]);      
    }

    maior = vet[0];

    for (i = 0; i < 9; i++){
        if (vet[i] > maior)
        maior = vet[i];
    }
    
    menor = vet[0];

    for (i = 0; i < 9; i++){
        if (vet[i] < menor)
        menor = vet[i];
    }   

    // Saida

    printf("O maior valor do vetor e %i.\nO menor valor do vetor e %i.", maior, menor);

    return(0);
}