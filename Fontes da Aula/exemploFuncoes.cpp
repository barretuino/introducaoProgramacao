#include <stdio.h>
#include <stdlib.h>

/**
	Exemplo de Função sem retorno
	Prof. Paulo Barreo
	Data 02/05/2021
**/

//<tipo_retorno> nome (parametrizacao){
	//corpo de comandos
//}
void somar(int valorA, int valorB){
	printf("Valor de %i + %i = %i\n", 
			valorA, valorB, valorA+valorB);
}

void ehParImpar(int valor){
	//Estruturas de decisão
	//if<codicao>..else
	//switch...case..default
	//ternário ? <condicao> ? T : F	
	printf("O valor %i e %s\n", valor,
			valor%2==0 ? "par" : "impar");
}

void imprimir(){
	printf("Exibir uma mensagem de finalização");
}

main(){
	//Declaração de Variáveis
	int valorA, valorB;
	
	printf("Informe o valorA: ");
	scanf("%i", &valorA);
	printf("Informe o valorB: ");
	scanf("%i", &valorB);
	
	//Invocar a execução da função que acabamos de criar
	somar(valorA, valorB);
	
	somar(45, 50);
	somar(60, -4);
	somar(-14, 14);
	ehParImpar(valorA);
	imprimir();
}

