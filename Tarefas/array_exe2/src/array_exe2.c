/*
 ============================================================================
 Name        : array_exe2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(void) {
//Declaração de strinfg para armazenar tres nome
	char nomes[3][30];//suponha que e nome tem ate 30 caracteres

	//solicitar ao usuario para inserir tres nomes
	for(int i=0;i<3;i++){
		printf("\nDigite o %do nome:",i+1);
		scanf("%s",nomes[i]);
	}
	//imprimir os nomes na odem inversa
	printf("\nNomes na ordem inversa:\n");
	for(int i = 2;i>=0;i--){
		printf("%s\n",nomes[i]);
	}
	//imprimir nomes e seus comprimentos
	printf("\nNomes e comprimentos:\n");
	for(int i = 0; i<3;i++){
		printf("%s - Comprimento:%zu\n", nomes[i], strlen(nomes[i]));
	}
	return EXIT_SUCCESS;
}*/
int main(void) {

	// Declaração de um array de strings para armazenar três nomes
	char nomes[3][30];  // Supondo nomes com até 30 caracteres

	// Solicitar ao usuário para inserir três nomes
	for (int i = 0; i < 3; i++) {
		printf("Digite o %do nome: ", i + 1);
		fflush(stdout);
		fgets(nomes[i],sizeof(nomes[i]),stdin);
		//scanf("%[^\n]s ", nomes[i]);
		//fpurge(stdin);
	}

	// Imprimir os nomes na ordem inversa
	printf("\nNomes na ordem inversa:\n");
	for (int i = 2; i >= 0; i--) {
		printf("%s\n", nomes[i]);
	}

	// Imprimir os nomes e seus comprimentos
	printf("\nNomes e comprimentos:\n");
	for (int i = 0; i < 3; i++) {
		printf("%s - Comprimento: %zu\n", nomes[i], strlen(nomes[i]));
		//%zu é um especificador de formato usado em linguagem C para imprimir valores do tipo size_t.
		//Ele é particularmente útil quando você está trabalhando com funções que retornam valores do tipo size_t,
		//como strlen, que retorna o comprimento de uma string.
	}

	return 0;
}
