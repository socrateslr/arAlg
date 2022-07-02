#include <stdio.h>

int main(){

    //Variaveis
    int ex1=1, ex2=2, ex4=4, ex5=5, opc;
    float Z, L, A, C, peso_i, alt, soma=0, x=1, num;
    char sexo;

    //Entradas e Processamentos

    printf("\nBem vindo ao exercicio 3.\nVoce deve escolher uma opcao entre:\n1 - Exercicio 1;\n2 - Exercicio 2;\n4 - Exercicio 4\n5 - fim.;\nFaca sua escolha: ");
    scanf("%i", &opc);
    
    switch (opc)
    {
        case 1:
            puts("\nVoce selecinou a opcao 1.\nVamos calcular o valor de Z.");
                
            printf("Informe o valor de L: ");
            scanf("%f", &L);
            printf("Informe o valor de A: ");
            scanf("%f", &A);
            printf("Informe o valor de C: ");
            scanf("%f", &C);
            
            Z = (L + A * 2.3) / C;

            printf("O valor de Z e igual a %0.2f.", Z);

            puts("\nObrigado, ate a proxima.");
        break;

        case 2:
            puts("\nVoce selecinou a opcao 2.\nVamos calcular o peso ideal.\n");
            
            printf("Vamos começar!! Informe o seu sexo: ");
            fflush(stdin);
            scanf("%c", &sexo);

            printf("Agora precisamos da sua altura: ");
            scanf("%f", &alt);

            if (( sexo == 'F') || ( sexo == 'f'))
            {
                peso_i = (400.7 * alt)/10;     
                printf("O seu peso ideal e igual a %0.2f", peso_i);
            }
            else if (( sexo == 'M') || ( sexo == 'm'))
            {
                peso_i = (450.7 * alt)/10;
                printf("O seu peso ideal e igual a %0.2f", peso_i);
            }

            else {
                puts("Sexo incorreto, por favor selecione uma opcao valida.");
            }
            
        
        break;
        
        case 4:
            puts("\nVoce selecinou a opcao 4.\nPor favor, insira 20 valores e ao final lhe retornarei com a somatoria.\n");

            while (ex1 <= 20)
            {
                printf("Escolha o %i numero: ", ex1);
                scanf("%f", &num);
                soma = soma + num;
                ex1++;
            }
            
            printf("A soma dos valores escolhidos e igual a %f.", soma);
        
        break;

        case 5:
            puts("Fim de execucao - tudo de bom");        
        break;


        default:

            printf("Escolha nao identificada, favor tentar novamente.\nObrigado!!!!");

            break;
        }


      
    return (0);
}