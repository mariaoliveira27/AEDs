/*
 ============================================================================
 Name        : array_exe1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//Exemplo de declaração e inicialização de um array de inteiros
	int numeros[7] = {1,2,3,4,5,6,7};
	//Exemplo de declaração e inicialização de um array de string
	char got7[][60] = {"\nJay B","\nMark","\nJackson","\nPark Jinyoung","\nChoi Youngjae","\nBambam","\nKim Yugyeom"};
	//Loop for para percorrero array e imprimir seus elementos
	printf("Elementos do array de inteiros:");
	for(int i= 0;i<7;i++){
		printf("%d", numeros[i]);
	}
	printf("\nNomes do Got7:");
	for(int i = 0; i<7;i++){
		printf("%s", got7[i]);
	}

	return EXIT_SUCCESS;
}
