/*
 ============================================================================
 Name        : palindromo_file.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char str[], int left, int right) {
	return (left >= right) ? 1 : (str[left] == str[right]) && isPalindrome(str, left + 1, right - 1);
}
int main(void) {

	//Abre o arquivo para escrita
	FILE *arquivo = fopen("exemplo.txt","w");
	//Verifica se o arquivo foi aberto com sucesso para escrita
	if(arquivo != NULL){
		int opcao = 1;
		do{
			char palavra[100];
			char resultado[100];
			printf("Digite uma palavra:");
			fflush(stdout);
			scanf("%s",palavra);
			int tamanho = strlen(palavra);
			if (isPalindrome(palavra, 0, tamanho - 1)){
				sprintf(resultado, "A palavra %s é palindromo.\n", palavra);
				fprintf(arquivo, resultado);
			}else{
				sprintf(resultado, "A palavra %s não é um palindromo.\n",palavra);
				fprintf(arquivo, resultado);
			}
			printf("Deseja continuar? sim=1, sair=0:");
			fflush(stdout);
			scanf("%d",&opcao);

			}while (opcao !=0);
		fclose(arquivo);
		printf("Texto gravado com sucesso.\n");

		}else{
			printf("Erro ao abrir o arquivo para escrita.\n");
			return 1;
		}

	return 0;
}
