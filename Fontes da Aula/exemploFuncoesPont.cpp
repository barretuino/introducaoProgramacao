#include <stdio.h>
#include <stdlib.h>

/**
	Funções passagem por referência
	Prof. Paulo Barreto
	Data 03/05/2021
**/

float somar(float *valorA, float *valorB){
	return *valorA + *valorB;
}
void acumular(float *var, float valor){
	*var += valor; //var = var + valor;
}

main(){
	float valorA, valorB;
	float somaAcumulada;
		
	printf("Entre com valorA: ");
	scanf("%f", &valorA);
	printf("Entre com valorB: ");
	scanf("%f", &valorB);
	
	printf("O resultado e %.2f\n", somar(&valorA, &valorB));
	
	for(int v=0; v<1000; v++){
		acumular(&somaAcumulada, v);
	}
	printf("O valor da somaAcumulada %.2f\n", somaAcumulada);
}
