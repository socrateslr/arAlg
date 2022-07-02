#include <stdio.h>

int main (){

    // Variaveis
    int mat[4][5], l, c, soma, total;

    // Entrada dos valores em navegação horizontal
    for (l = 0; l < 4; l++){
        for (c = 0; c < 5; c++){
            printf("Usuario, insira o valor da linha %i, coluna %i: ", l, c);
            scanf("%i", &mat[l][c]);
            soma = soma + mat[l,c];            
        }  
    }

    // Saida com as somas das colunas e o Total
    
    total = 0;
    for (c = 0; c < 5; c++){
        
        soma = 0;
        for (l = 0; l < 4; l++){
            soma = soma + mat[l][c];
        }                
        printf("Total da coluna %i: %i\n", c, soma);

        total = total + soma;            
    }
    printf("Total geral e de %i\n", total);   


    return(0);
}