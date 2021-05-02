#include<stdio.h>
#include<stdlib.h>

/**
	Exemplo de funções com retorno
	Prof. Paulo Barreto
	Data 03/05/2021
**/

//Função que recebe dois float's e retorno um float
float somar(float valorA, float valorB){
	return valorA + valorB;
}
float multiplicar(float valorA, float valorB){
	return valorA * valorB;
}
float dividir(float valorA, int dividendo){
	return valorA / dividendo;
}

main(){
	float valorA, valorB;
	int dividendo;
	
	printf("Entre com o valorA: ");
	scanf("%f", &valorA);
	printf("Entre com o valorB: ");
	scanf("%f", &valorB);
	
	printf("A soma de %.2f + %.2f = %.2f\n",
		valorA, valorB, somar(valorA, valorB));
	printf("A multiplicacao de %.2f x %.2f = %.2f\n",
		valorA, valorB, multiplicar(valorA, valorB));
		
	printf("Entre com o dividendo: ");
	scanf("%i", &dividendo);
	printf("A divisao de %.2f / %i = %.2f\n",
		valorA, dividendo, dividir(valorA, dividendo));
		
	printf("A divisao de %.2f / %i = %.2f\n",
		10, 5, dividir(10, 5));
}
