#include <stdio.h>
#include <stdlib.h>

/**
	Exemplo de vetores e matrizes
	Prof. Paulo Barreto
	Data 03/05/2021	
**/

main(){
	//Declarar um variável para N
	int n = 2;
	//Declaração de um vetor
	int vetValor[n];
	//Declaração de uma matriz
	int matMedias[n][2];
	
	//Manipulação de Vetores *******************
	//Estrutura de entrada de dados
	for(int i=0; i < n; i++){
		printf("Informe o valor da posicao %i ", i+1);
		scanf("%i", &vetValor[i]);
	}
	
	//Estrutura de saída de dados
	for(int i=0; i < n; i++){
		printf("O valor informado em %i e %i\n", i+1, vetValor[i]);
	}
	//Fim Manipulação de Vetores ******
	
	//Manipulação de Matrizes ******************
	//Estrutura de entrada de dados
	for(int linha=0; linha < n; linha++){
		for(int coluna=0; coluna < 2; coluna++){
			printf("Informe o valor de %i %i ", linha, coluna);
			scanf("%i", &matMedias[linha][coluna]);
		}		
	}
	//Estrutura de saida de dados
	for(int linha=0; linha < n; linha++){
		for(int coluna=0;coluna < 2; coluna++){
			printf("O valor informado para %i %i e %i\n",
				linha, coluna, matMedias[linha][coluna]);
		}
	}
	//Fim Manipulação de Matrizes **************
}
