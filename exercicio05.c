#include <stdio.h>

int main (){

    // Variaveis
    
    float area, base, altura;
    int x;
    x = 1;

    // Entradas e saida

    do {
        printf("Informe o valor da base:", base);
        scanf("%f", &base);
        printf("Informe o valor da altura:", altura);
        scanf("%f", &altura);

        area = (base * altura) / 2;
        x = x + 1;

        printf("A area e igual a: %0.2f\n", area);
        
    } 
    while ( x < 7);

    return(0);
}