#include <stdio.h>

int main(){

    //Variavel
    float altura, peso_i;
    char sexo;

    //Entradas
    printf("Informe o seu sexo.\nM para masculino e F para feminino: ");
    sexo = getche();

    printf("\nInforme o sua altura: ");
    scanf("%f", &altura);

    //processamento e saida

    if ( ( sexo == 'M') || ( sexo == 'm') )
    {
        peso_i = (450.7 * altura) / 10;
        printf("O peso ideal e %0.2f kg.", peso_i);
    }

    else{
        if ( ( sexo == 'f') || ( sexo == 'F') ){
            peso_i = (400.7 * altura) / 10;
            printf("O peso ideal e %0.2f kg.", peso_i);
        }
        else {
            puts("Sexo nao identificado, por favor selecione uma opcao valida.\nFim da sessao.");
        }
    }
    
    return 0;
}