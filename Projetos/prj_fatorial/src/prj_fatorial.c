/*
 ============================================================================
 Name        : prj_fatorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fatorialComLoop(int n){
	int resultado = 1;
	for(int i = 1; i<= n; i++){
		resultado *=i;
	}
	return resultado;
}
int main (void){
	int numero = 5;
	printf("O fatorial recursivo de %d é: %d\n", numero, fatorialComLoop(numero));
	return 0;
}
