/*
 ============================================================================
 Name        : prj_loteria.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));

	int numSorteado = rand()%101;

	printf("Loteria");
	printf("\n\n Escolha um número entre 0 e 100:");
	int numEscolhido;
	scanf("%d",&numEscolhido);

	if(numEscolhido == numSorteado);
	printf("\nVoce ganhou!");

}else{
	printf("\nVoce perdeu! O número sorteado  foi: %d", numSorteado);

}
return 0;
}
