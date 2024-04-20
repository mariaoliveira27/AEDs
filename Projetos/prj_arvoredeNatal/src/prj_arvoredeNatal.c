/*
 ============================================================================
 Name        : prj_arvoredeNatal.c
 Author      : Maria Clara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void natalTree(int tamanho){
	printf("Digite o numero de linhas (maior que 0):");
	scanf("%d",&tamanho);
	printf("\n");

	//Laço para imprimir a quantidade de linha
	for(int i=1; i <= tamanho; i++){
	    //Tem que ser i=1, pois não tem como ser 0
	    //menor ou igual ao tamanho
	    // então enquanto o numero for menor ou igual ao tamanho digitado o for vai imprimir as linhas 
		//Laço para definir o espaçamento
		for(int j=1; j<= tamanho -i; j++)
		//Enquanto j for menor ou igual ao tamanho -1 o for vai funcionar imprimindo os espaços em branco 
		//4-1=3
		//4-2=2
		//4-3=1
			printf(" ");
			//laço para imprimir o asterisco
			//
			for(int star=1; star<=(2*i)-1; star++){
			                //1*2-1=1
			                //2*2-1=3
			                //3*2-1=5
			                //4*2-1=7
				printf("*");
			}
		printf("\n");
	}
}
int main(void){
    int tamanho;
    natalTree( tamanho);
    return 0;
}
