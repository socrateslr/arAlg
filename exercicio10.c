#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float entrada(){
    
    float n1, n2, n3, n4;
    float media;

    puts("\n\n    Calculo de medias \n\n ");

    printf("Informe a PRIMEIRA nota: ");
    scanf("%f", &n1);

    printf("Informe a SEGUNDA nota.: ");
    scanf("%f", &n2);

    printf("Informe a TERCEIRA nota: ");
    scanf("%f", &n3);

    printf("Informe a QUARTA nota..: ");
    scanf("%f", &n4);
    
    media = (n1 + n2 + n3 + n4) / 4;

    puts("\n\n    Notas Declaradas\n\n");
    printf("Nota 1: %0.2f", n1);
    printf("\nNota 2: %0.2f", n2);
    printf("\nNota 3: %0.2f", n3);
    printf("\nNota 4: %0.2f", n4);
    printf("\nMedia.: %0.2f", media);

    return(media);
} //variaveis locais

float status (float media1){
    if ( media1 >= 6.0){
        printf("\n\nAluno aprovado");
    }
    else{
        printf("\n\nAluno reprovado");
    }       
}


int main(){

    float retMed; //variaveis globais
    char escolha;

    do
    {
        retMed = entrada();
        status(retMed);

        puts("\n\nDeseja fazer novo calculo S/N? ");
        fflush(stdin);
        escolha = getch();

    } while ((escolha != "s") || (escolha != "S"));

    // printf("Fim da execucao. Ate a proxima!");
    
    return (0);
}