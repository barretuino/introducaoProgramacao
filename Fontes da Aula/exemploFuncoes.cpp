#include <stdio.h>
#include <stdlib.h>

/**
	Exemplo de Fun��o sem retorno
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
	//Estruturas de decis�o
	//if<codicao>..else
	//switch...case..default
	//tern�rio ? <condicao> ? T : F	
	printf("O valor %i e %s\n", valor,
			valor%2==0 ? "par" : "impar");
}

void imprimir(){
	printf("Exibir uma mensagem de finaliza��o");
}

main(){
	//Declara��o de Vari�veis
	int valorA, valorB;
	
	printf("Informe o valorA: ");
	scanf("%i", &valorA);
	printf("Informe o valorB: ");
	scanf("%i", &valorB);
	
	//Invocar a execu��o da fun��o que acabamos de criar
	somar(valorA, valorB);
	
	somar(45, 50);
	somar(60, -4);
	somar(-14, 14);
	ehParImpar(valorA);
	imprimir();
}

