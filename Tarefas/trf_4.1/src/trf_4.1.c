/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double idade[10];
	double media, soma;
	for(int i = 0; i<10; i++){
		printf("Digite a idade %d:", i+1);
		scanf("%lf",&idade[i]);
		soma += idade[i];
	}
	media = soma/10;
	printf("A soma é: %.2lf", soma);
	printf("\nA media das idades é: %.2lf",media);
	return 0;
}
