/*
 ============================================================================
 Name        : prjav011.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sorteio(int portaEscolhida, int portaPremiada, int portaVazia){
	printf("Bem vindo ao jogo monty hall:!");
	printf("Escolha uma das tres portas(1 a 3):")
	scanf("%d",&portaEscolhida);

	//Laço para imprimir a quantidade de linha
	for(int i=1; i <= tamanho; i++){
		//Laço para definir o espaçamento
		for(int j=1; j<= tamanho -i; j++){
			printf("-");
			//laço para imprimir o asterisco
			for(int star=1; star<=(2*1)-1; star++){
				printf("*");
			}
		}
	}
}
int main(void) {
	int portaPremiada, portaEscolhida, portaVazia;
	srand(time(NULL));
	int portaPremiada = rand() % 3 + 1;
}
void menu() {
	int escolha;
	printf("Bem vindo ao jogo das portas");

	printf("Selecione uma das 3 portas premiadas:");
	printf("1- Porta 1");
	printf("2- Porta 2");
	printf("3- porta 3");
	scanf("%d", escolha);

	switch (escolha) {
	case 1:
		if (portaEscolhida == portaPremiada);
		printf("Você ganhou");
	}
else {

}

}
