/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float altura[10];
	for(int i = 0; i<10; i++){
		printf("Digite a altura %d:", i+1);
		scanf("%f",&altura[i]);
	}
}
