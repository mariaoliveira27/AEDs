/*
 ============================================================================
 Name        : prj_variaveis.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void){
	int idade = 20;
	const int MAX_NUM = 100;

	printf("Minha Variável int comum = %d\n\n", idade);
	printf("Minha variável int constante = %d\n\n", MAX_NUM);
	printf("Minha constante = %f\n", PI);

	// MAX_NUM = 99

	return EXIT_SUCCESS;
	}
