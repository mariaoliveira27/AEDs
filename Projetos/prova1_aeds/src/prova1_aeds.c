/*
 ============================================================================
 Name        : prova1_aeds.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Declarar as variaveis
int main(void) {
	int portaEscolhida, portaVazia, portaPremiada;
	char opcao;

	printf("Seja bem vindo ao jogo Monty Hall!");
	printf("Escolha uma porta de (1 a 3):");
	scanf("%d", &portaEscolhida);

	srand(time(NULL));
	portaPremiada= rand()%3+1;


	for(int i =1; i<=3; i++){
		if(i!= portaPremiada && i!= portaEscolhida){
			}else{
				portaVazia = i;
				break;
			}
	}
	for( int j = 1; j <=3; j++){
		    if(j !=portaVazia && j!= portaEscolhida){
		        }else{
		            portaPremiada = j;
		            break;

	printf("Vamos abrir a porta %d!", portaPremiada);
	printf("Essa porta não tem um premio %d", portaVazia);
	printf("Deseja trocar de porta? Digite s para sim e n para não.");
	scanf(" %c",&opcao);

	if(opcao == 's'){
		printf("Escolha uma porta diferente da escolhida inicialmente( 1 a 3):");
		scanf("%d", &portaEscolhida);
	}
if(opcao == 'n'){
	printf("Sua escolha de porta se mantem");
}
if(portaEscolhida == portaPremiada){
	printf("Voce venceu!");
}else{
	printf("\nVoce perdeu");
}
printf("\nA porta premiada é : %d", portaPremiada);
return 0;

}
