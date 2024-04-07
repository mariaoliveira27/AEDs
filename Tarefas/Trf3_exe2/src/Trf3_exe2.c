/*
 ============================================================================
 Name        : Trf3_exe2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numDeCigAoLongoDaVida(int anos, int porDia){
	return anos * 365 * porDia;
}
float valorTotal(int cigAoLongoDavida, float valorMaco){
	return (cigAoLongoDaVida / 20.0) * valorMaco;
}
int main(void){
	int anos, porDia;
	float valorMaco;

	printf("Digite a quantidade de anos que fuma:");
	scanf("%d",&anos);
	printf("Digite a quantidade de cigarros fumados por dia:");
	scanf("%f",&valorMaco);
	int cigAoLongoDaVida = numDeCigAoLongoDaVida (anos,porDia);
	float valorGasto = valorTotal (cigAoLongoDaVida, valorMaco);

	printf("\n Numero de cigarros ao longo da vida: %d", cigAoLongoDaVida);
	printf("\n Valor total gasto: R$ %.2f",valorGasto);
	return 0;

}
