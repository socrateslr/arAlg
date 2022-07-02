// 1) Encontrar e apresentar o valor para Z aplicando a seguinte fórmula: Z = ( L+ A * 2.3) / C

#include <stdio.h>

int main(){

    //Variaveis
    float L, A, C, Z;

    //Entradas
    printf("Escolha o valor de L: ");
    scanf("%f", &L);

    printf("Escolha o valor de A: ");
    scanf("%f", &A);

    printf("Escolha o valor de C: ");
    scanf("%f", &C);

    //Processamento

    Z = ( L + A * 2.3) / C;

    //Saida

    printf("O valor de Z e igual a %0.2f.", Z);

    
    return 0;
}