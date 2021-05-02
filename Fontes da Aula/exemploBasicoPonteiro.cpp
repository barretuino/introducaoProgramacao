#include <stdio.h>
#include <stdlib.h>

/**
	Introdução ao conceito de ponteiro
	Prof. Paulo Barreto
	Data 03/05/2021
**/

main(){
	int valor = 19;
	int valorA = 3, valorB = 10;
	int *ponteiro = &valor;
	
	printf("Imprimir [valor] valor %i\n", valor);
	printf("Imprimir [valor] endereco %i\n", &valor);
	printf("Imprimir [valor] referencia %i\n", *ponteiro);
	printf("Imprimir [valor] endereco do ponteiro %i\n", &ponteiro);		
	printf("Imprimir [valor] conteudo do ponteiro %i\n", ponteiro);		
	
	*ponteiro = 23;
	printf("Imprimir [valor] valor atualizado %i\n", valor);
}
