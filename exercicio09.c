#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (void){

    // Variaveis

    struct registro {
        int cod;
        char nome[80];
        char endereco[50];
        int dtNasc[3];
        char sexo;
        float vlDevido;
        float vlCredito;
        int idade;
        char status;
    }; 
	
	struct registro cli[5];
    char loop;

	// Entrada processamento e saida
	
	puts("\n\n             CADASTRO");

    do{
        int i=0;        

        for (i = 0; i < 5; i++){

            printf("\n\nCadastro numero: %i\n\n", i);

            printf("Informe o codigo................: ");
            scanf("%i", &cli[i].cod);

            printf("Informe o nome..................: ");
            fflush(stdin);  //limpar o buffer do teclado
            gets(cli[i].nome);

            printf("Informe o endereco..............: ");
            fflush(stdin);  //limpar o buffer do teclado
            gets(cli[i].endereco); 

            printf("Entre com o DIA que nasceu......: ");
            scanf("%i", &cli[i].dtNasc[0]);
            
            printf("Entre com o MES que nasceu......: ");
            scanf("%i", &cli[i].dtNasc[1]);

            printf("Entre com o ANO que nasceu......: ");
            scanf("%i", &cli[i].dtNasc[2]);

            printf("Informe o sexo..................: ");
            fflush(stdin);  //limpar o buffer do teclado
            cli[i].sexo = getche();
            
            printf("\nInforme o valor total devido..: ");
            scanf("%f", &cli[i].vlDevido);
            
            printf("Informe o valor total de credito: ");
            scanf("%f", &cli[i].vlCredito);
            
            printf("Informe a idade.................: ");
            scanf("%i", &cli[i].idade);
            
            printf("Informe o status................: ");
            fflush(stdin);  //limpar o buffer do teclado
            cli[i].status = getche();   
        }

        puts("\n\n               RELATORIO\n\n");

        for (i = 0; i < 5; i++){

            printf("Codigo..........................: %i\n", cli[i].cod);
            printf("Nome............................: %s\n", cli[i].nome);
            printf("Endereco........................: %s\n", cli[i].endereco);
            printf("Data de nascimento..............: %i/%i/%i\n", cli[i].dtNasc[0], cli[i].dtNasc[1], cli[i].dtNasc[2]);
            printf("Sexo............................: %c\n", cli[i].sexo);
            printf("Valor total devido..............: %f\n", cli[i].vlDevido);
            printf("Valor total de credito..........: %f\n", cli[i].vlCredito);
            printf("Idade...........................: %i\n", cli[i].idade);
            printf("Status..........................: %c\n", cli[i].status);

            puts("<------><------><------><------><------><------><------><------>");            
        }

        puts("\nDeseja repetir o processo? (S p/ continuar)");
        fflush(stdin);
        loop=getch();

    } while (loop=="S" || loop=="s");

    puts("Fim da execução do algoritomo. Ate a proxima!");
    
    return (0);
}
