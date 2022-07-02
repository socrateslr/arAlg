#include <stdio.h>

int main (){

    //VARIAVEIS
    int x=1, soma=0, num;


    //ENTRADAS - PROCESSAMENTO

    while (x <= 20)
    {
        printf("Informe o %i numero: ", x);
        scanf("%i", &num);
        soma = soma + num;
        x++;
    }

    //SAIDA 

    printf("A soma dos valores insiridos e igual a %i.", soma);   

    return (0);
}