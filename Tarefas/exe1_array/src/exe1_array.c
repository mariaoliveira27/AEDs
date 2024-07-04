/*
 ============================================================================
 Name        : exe1_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define linhas 3
#define colunas 3

int atv1(){
	int numeros[5];
	int soma = 0;
	double media = 0;
	printf("Digite 5 numeros inteiros\n");
	for(int i = 0;i<5;i++){
		printf("Numero %d",i+1);
		scanf("%d",&numeros[i]);
		soma = soma + numeros[i];
	}
media = (double) soma/5;

printf("Soma %d",soma);
printf("Media %.2lf",media);
return 0;
}
//MATRIZ
int atv2(){
	//Declaração da matriz bidimensional
	int matriz2d[linhas][colunas];

	//preenchimento da matriz
	printf("Digite os elementos da matriz (%d x %d):\n",linhas, colunas);
	for(int i=0; i<linhas;i++){
		for(int j = 0;j<colunas;j++){
			printf("Elemento [%d][%d]:", i, j);
			scanf("%d",&matriz2d[i][j]);
		}
	}
	//Exibição da matriz
	printf("\n Matriz digitada:\n");
	for(int i = 0; i<linhas; i++){
		for(int j = 0; j<colunas;j++){
			printf("%d\t",matriz2d[i][j]);
		}
	printf("\n");
	}
return 0;
}
int atv3(){
	//Declaração da matriz tridimenssional
	int matriz3d[3][3][3]={
			{{w,w,w},{R,R,R},{G}
	};
}

int main(void){
	atv1();
	atv2();
}
