#include <stdio.h>

int main(){

    // Variaveis
	int F;
	float C;

    // Introdução

    puts("Conversao do intervalo de 40 a 60 Fahrenheit para Celsius...");
    getche();
	
	for (F = 40; F < 61; F ++){
		
		C = (5.0/9.0) * (F-32);
		
		printf("\nA conversao de %i em Fahrenheit e %0.2f em graus Celsius", F, C); 
	}	
	
    puts("\n\nPressione enter para finalizar...");
    getche();

	return(0);
}