/*
 ============================================================================
 Name        : prj_dados.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função para lançar um dado
int rolarDado(){
	return rand()%6+1; //Gera um numero aleatorio entre 1 e 6
}
//Função para calcular a soma dos valores dos dados
int calcularSoma(int dado1, int dado2){
	return dado1 + dado2;
}

int main(void) {
	int jogador1[2],jogador2[2];
	int somaJogador1,somaJogador2;
	srand(time(NULL)); //Semente para a função rand()
	int historicoJogador1[100],int historicoJogador2[100];
	int opcao = 0;
	do{
		printf("1-Rolar dado");
		printf("2-Historico de jogadas");
		printf("3-Sair");
		scanf("%d",&opcao);
		switch(opcao):
			case 1:
				rolarDado();
				break;
			case 2:
				historico();
				break;
			case 3:
				break;
	}while(opcao !=3);
	}

	while
	printf("Jogador 1, pressione ENTER para rolar os dados.\n");
	getchar();//Esperar o jogador 1 pressionar ENTER
	jogador1[0] = rolarDado();
	jogador1[1] = rolarDado();

	historicoJogador1[i] = jogador1[i];
	historicoJogador1[i] = jogador1[i];

	printf("Jogador 1: %d + %d\n",jogador1[0], jogador1[1]);
	somaJogador1= calcularSoma(jogador1[0],jogador1[1]);
	printf("A soma do jogador 1: %d\n", somaJogador1);

	printf("Jogador 2, pressione ENTER para rolar os dados.\n");
		getchar();//Esperar o jogador 1 pressionar ENTER
		jogador2[0]= rolarDado();
		jogador2[1]= rolarDado();
		historicoJogador2[i] = jogador2[i];
			historicoJogador2[i] = jogador2[i];
		printf("Jogador 2: %d + %d\n",jogador2[0], jogador2[1]);
			somaJogador2= calcularSoma(jogador2[0],jogador2[1]);
			printf("A soma do jogador 2: %d\n", somaJogador2);

			if(somaJogador1>somaJogador2){
				printf("\nJogador 1 vence!\n");
			}else if(somaJogador1<somaJogador2){
				printf("\nJogador 2 vence!\n");
			}else{
				printf("\nEmpate!Jogue novamente!\n");
			}
	return EXIT_SUCCESS;
}
